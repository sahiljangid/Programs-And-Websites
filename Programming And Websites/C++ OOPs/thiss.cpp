#include<iostream>
using namespace std;

class thiss
{
    int x;
    public:
        void setX(int x)
        {
            this->x = x;
        }
        void print()
        {
            cout<<"X = "<<x<<endl;
        }
};

int main()
{
    thiss obj;
    int a = 20;
    obj.setX(a);
    obj.print();

    return 0;
}