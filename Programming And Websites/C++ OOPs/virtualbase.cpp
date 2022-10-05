#include<iostream>
using namespace std;

class A
{
    public:
    int i = 10;
};
class B:virtual public A{

};
class C:virtual public A
{

};

class D: public B, public C
{
    public:
    int show()
    {
        return i;
    }
};

int main()
{
    D d;
    cout<<d.show();
}

