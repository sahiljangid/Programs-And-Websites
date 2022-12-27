#include <iostream>
#define SPACE 10
using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }
    bool isEmpty()
    {
        if (root == NULL)
            return true;
        else
            return false;
    }

    void insertNodeIterative(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value Inserted as root node!" << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->value == temp->value)
                {
                    cout << "value Already Exist, Insert another value!" << endl;
                    return;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "Value Inserted to the left!" << endl;
                    break;
                }
                else if (new_node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "Value Inserted to the right!" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }


    TreeNode * insertRecursive(TreeNode *r, TreeNode *new_node)
    {
        if(r == NULL)
        {
            r = new_node;
            cout<<"Node inserted as root"<<endl;
            return r;
        }

        if(new_node->value < r->value)
        {
            r->left = insertRecursive(r->left, new_node);
            cout<<"Node inserted as left child."<<endl;

        }

        else if(new_node->value > r->value)
        {
            r->right = insertRecursive(r->right, new_node);
            cout<<"Node inserted as right child"<<endl;

        }
        else
        {
            cout<<"No duplicate values allowed!"<<endl;
            return r;
        }
        return r;
    }


    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
            return;
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
            cout << " ";
        cout << r->value << "\n";
        print2D(r->left, space);
    }

    void printPreorder(TreeNode *r)
    {
        if(r == NULL)
        {
            return;
        }
        cout<<r->value<<" ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    void printInorder(TreeNode *r)
    {
        if(r == NULL)
        {
            return;
        }
        printInorder(r->left);
        cout<<r->value<<" ";
        printInorder(r->right);
    }

    void printPostorder(TreeNode *r)
    {
        if(r == NULL)
        {
            return;
        }
        printPostorder(r->left);
        printPostorder(r->right);
        cout<<r->value<<" ";
    }

    TreeNode *iterativeSearch(int val)
    {
        if(root == NULL)
        {
            return root;
        }
        else
        {
            TreeNode *temp = root;
            while(temp != NULL)
            {
                if(val == temp->value)
                {
                    return temp;
                }
                else if(val<temp->value)
                {
                    temp = temp->left;
                }
                else
                {
                    temp = temp->right;
                }
            }
            return NULL;
        }
    }

    TreeNode *recursiveSearch(TreeNode* r, int val)
    {
        if(r == NULL || r->value == val)
        {
            return r;
        }
        else if(val < r->value)
        {
                return recursiveSearch(r->left, val);
        }
        else
        {
            return recursiveSearch(r->right, val);
        }
    }

    int height(TreeNode *r)
    {
        if(r == NULL)
        {
            return -1;
        }
        else
        {
            int lheight = height(r->left);
            int rheight = height(r->right);

            if(lheight>rheight)
            {
                return(lheight+1);
            }
            else
            {
                return(rheight+1);
            }
        }
    }

    void printGivenLevel(TreeNode *r, int level)
    {
        if(r == NULL)
            return;
        else if(level == 0)
            cout<<r->value<<" ";
        else
        {
            printGivenLevel(r->left, level-1);
            printGivenLevel(r->right, level-1);
        }
    }

    void printLevelOrderBFS(TreeNode *r)
    {
        int h = height(r);
        for(int i = 0; i <= h; i++)
            printGivenLevel(r, i);
    }

    TreeNode *minValueNode(TreeNode *node)
    {
        TreeNode *current = node;

        while (current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

    TreeNode *deleteNode(TreeNode *r, int v)
    {
        if(r == NULL)
        {
            return NULL;
        }

        else if(v < r->value)
        {
            r->left = deleteNode(r->left, v);
        }

        else if(v > r->value)
        {
            r->right = deleteNode(r->right, v);
        }
        else
        {
            if(r->left == NULL)
            {
                TreeNode *temp = r->right;
                delete r;
                return temp;
            }
            else if(r->right == NULL)
            {
                TreeNode *temp = r->left;
                delete r;
                return temp;
            }
            else
            {
                TreeNode *temp = minValueNode(r->right);
                r->value = temp->value;
                r->right = deleteNode(r->right, temp->value);
            }
        }

        int bf = getBalanceFactor(r);

        if(bf == 2 && getBalanceFactor(r->left) >= 0)
        {
            return rightRotate(r);
        }
        else if(bf == 2 && getBalanceFactor(r->left) == -1)
        {
            r->left = leftRotate(r->left);
            return rightRotate(r);
        }

        else if(bf == -2 && getBalanceFactor(r->right) <= -0)
        {
            return leftRotate(r);
        }
        else if(bf == -2 && getBalanceFactor(r->right) == 1)
        {
            r->right = rightRotate(r->right);
            return leftRotate(r);
        }

        return r;
    }

    int getBalanceFactor(TreeNode *n)
    {
        if(n==NULL)
        {
            return -1;
        }
        return height(n->left) - height(n->right);
    }

    TreeNode *rightRotate(TreeNode *y)
    {
        TreeNode *x = y->left;
        TreeNode *T2 = x->right;
        //Perform rotation
        x->right = y;
        y->left = T2;

        return x;
    }

    TreeNode *leftRotate(TreeNode *x)
    {
        TreeNode *y = x->right;
        TreeNode *T2 = y->left;

        //Perform rotation
        y->left = x;
        x->right = T2;

        return y;
    }

    TreeNode *insert(TreeNode *r, TreeNode *new_node)
    {
        if(r == NULL)
        {
            r=new_node;
            cout<<"Value inserted successfully"<<endl;
            return r;
        }

        if(new_node->value < r->value)
        {
            r->left = insert(r->left, new_node);

        }
        else if(new_node->value > r->value)
        {
            r->right = insert(r->right, new_node);
        }
        else 
        {
            cout<<"No duplicate values allowed!"<<endl;
            return r;
        }

        int bf = getBalanceFactor(r);

        //Left Left case
        if(bf > 1 && new_node->value < r->left->value)
            return rightRotate(r);
        
        //Right Right case
        if(bf < -1 && new_node->value > r->right->value)
            return leftRotate(r);
        
        //Left Right case
        if(bf > 1 && new_node->value > r->left->value)
        {
            r->left = leftRotate(r->left);
            return rightRotate(r);
        }

        //Right Left case
        if(bf < -1 && new_node->value < r->right->value)
        {
            r->right = rightRotate(r->right);
            return leftRotate(r);
        }

        return r;
    }



};

int main()
{
    BST obj;
    int option, val;
    do
    {
        cout << "\nWhat operation do you want to perform?" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print/Traversal BST values" << endl;
        cout << "5. Height of Tree" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;
        cin >> option;
        // Node n1;
        TreeNode *new_node = new TreeNode();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "INSERT" << endl;
            cout << "Enter Value of tree node to insert in BST: ";
            cin >> val;
            new_node->value = val;
            // obj.root = obj.insertRecursive(obj.root, new_node);
            // obj.insertNodeIterative(new_node);
            obj.root = obj.insert(obj.root, new_node);
            cout<<endl;
            break;

        case 2:
            cout << "SEARCH" << endl;
            cout << "Enter Value of tree node to search in BST: ";
            cin >> val;
            new_node = obj.recursiveSearch(obj.root, val);
            // new_node = obj.iterativeSearch(val);
            if(new_node != NULL)
            {
                cout<<"Value Found"<<endl;
            }
            else
            {
                cout<<"Value Not Found"<<endl;
            }
            break;

        case 3:
            cout << "DELETE" << endl;
            cout<<"Enter value of Tree Node to delete in BST: ";
            cin>>val;
            new_node = obj.recursiveSearch(obj.root, val);
            if(new_node != NULL)
            {
                obj.root = obj.deleteNode(obj.root, val);
                cout<<"Value Deleted"<<endl;
            }
            else
            {
                cout<<"Value Not Found"<<endl;
            }
            break;

        case 4:
            cout<<endl;
            cout << "PRINT 2DTREE" << endl;
            obj.print2D(obj.root, 5);
            cout<<endl;
            cout<<"\nPRE-ORDER ";
            obj.printPreorder(obj.root);
            cout<<endl;
            cout<<"\nIN-ORDER ";
            obj.printInorder(obj.root);
            cout<<endl;
            cout<<"\nPOST-ORDER ";
            obj.printPostorder(obj.root);
            cout<<endl;
            cout<<"\nPrint Level Order BFS:  ";
            obj.printLevelOrderBFS(obj.root);
            cout<<endl;
            
            break;

        case 5:
            cout<<"TREE HEIGHT"<<endl;
            cout<<"Height :"<<obj.height(obj.root)<<endl;
            break;

        case 6:
            system("cls");
            break;

        default:
            cout << "Enter Proper Option Number " << endl;
            break;
        }
    } while (option != 0);
}
