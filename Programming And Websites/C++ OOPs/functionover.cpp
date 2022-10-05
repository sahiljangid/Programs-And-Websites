#include<iostream>
using namespace std;

class A
{
    public:
    void print()
    {
        cout<<"This is base class A function\n";
    }
};

class B:public A
{
    public:
    void print()
    {
        cout<<"This is derived class B function\n";
    }
};

int main()
{
    A a;
    B b;
    b.A::print();
    

    return 0;
}