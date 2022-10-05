#include<iostream>
using namespace std;

class A
{
    public:
    static int i;
    int show()
    {
        return i;
    }
};

int A::i=10;

int main()
{
    A a,b,c;
    cout<<a.show();
    cout<<"\n";
    a.i = 5;
    cout<<b.show();
    cout<<"\n";
    b.i = 10;
    cout<<c.show();
    cout<<"\n";

    return 0;
}