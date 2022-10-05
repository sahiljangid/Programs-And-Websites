#include<iostream>
using namespace std;

class A
{
    // const int x = 10;//Constant data member
    int x = 10;
    public:
    int incr() const//Constant member function
    {
        // x++;
        cout<<"X = "<<x;
    }
};

int main()
{
    A a;
    a.incr();

    return 0;
}