#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

class MinHeap
{
public:
    int *harr;
    int capacity;
    int heap_size;

    MinHeap(int cap)
    {
        heap_size = 0;
        capacity = cap;
        harr = new int[cap];
    }

    void linearSearch(int val)
    {
        for (int i = 0; i < heap_size; i++)
        {
            if (harr[i] == val)
            {
                cout << "Value Found!";
                return;
            }
        }
        cout << "Value Not Found!";
    }

    void printArray()
    {
        for (int i = 0; i < heap_size; i++)
            cout << harr[i] << " ";
        cout << endl;
    }

    int height()
    {
        return ceil(log2(heap_size + 1)) - 1;
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }

    int getMin()
    {
        return harr[0];
    }

    void insertKey(int k)
    {
        if (heap_size == capacity)
        {
            cout << "\nOverflow: Could not insert key\n";
            return;
        }

        // First inserrt the new key at the end
        heap_size++;
        int i = heap_size - 1;
        harr[i] = k;

        // Fix the min heap property if it is violated
        while (i != 0 && harr[parent(i)] > harr[i])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    void MinHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(l < heap_size && harr[l] < harr[i])
            smallest = l;
        if(r < heap_size && harr[r] < harr[smallest])
            smallest = r;
        if(smallest != i)
        {
            swap(harr[i], harr[smallest]);
            MinHeapify(smallest);
        }
    }

    int extractMin()
    {
        if (heap_size <= 0)
        {
            return INT_MAX;
        }
        if (heap_size == 1)
        {
            heap_size--;
            return harr[0];
        }

        // Store the minimum value, and remove it from heap
        int root = harr[0];
        harr[0] = harr[heap_size - 1];
        heap_size--;
        MinHeapify(0);
        return root;
    }

    void decreaseKey(int i, int new_val)
    {
        harr[i] = new_val;
        while(i != 0 && harr[parent(i)] > harr[i])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteKey(int i)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }


};

int main()
{
    int s;
    cout << "Enter size of Min Heap" << endl;
    cin >> s;
    MinHeap obj(s);
    cout << "Min Heap Created" << endl;

    int option, val;

    do
    {
        cout << "What operation do you want to perform?";
        cout << "Select Option number" << endl;
        cout << " 1. Insert Key/Node" << endl;
        cout << " 2. Search Key/Node" << endl;
        cout << " 3. Delete Key/Node" << endl;
        cout << " 4. Get Min" << endl;
        cout << " 5. Extract Min" << endl;
        cout << " 6. Height of Heap" << endl;
        cout << " 7. Print/Traversal Heap Values" << endl;
        cout << " 8. Clear Screen" << endl;
        cout << " 0. Exit Program" << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Insert Operation -" << endl;
            cout << "Enter Value to Insert In Heap: ";
            cin >> val;
            obj.insertKey(val);
            cout << endl;
            break;

        case 2:
            cout << "Search Operation - " << endl;
            cout << "Enter Value to Search in Heap: ";
            cin >> val;
            obj.linearSearch(val);
            break;

        case 3:
            cout << "Delete Opeartion -" << endl;
            cout << "Enter Index of Heap Array to Delete: ";
            cin >> val;
            obj.deleteKey(val);
            break;

        case 4:
            cout << "Get Min Value: ";
            cout<<obj.getMin()<<endl;
            break;

        case 5:
            cout << "Extract Min Value: ";
            cout<<obj.extractMin()<<endl;
            cout << endl;
            break;

        case 6:
            cout << "Heap Tree Height: ";
            cout<<obj.height()<<endl;
            break;

        case 7:
            cout << "Print Heap Array: " << endl;
            obj.printArray();
            cout << endl;
            break;

        case 8:
            system("cls");
            break;

        default:
            cout << "Enter Proper Option Number" << endl;
        }
    } while (option != 0);
}