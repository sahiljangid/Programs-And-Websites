#include<iostream>
using namespace std;

class multiplebase
{
    public:
        int a=10;

};
class derived : public multiplebase
{
    public:
    int b=20;
    int sum()
    {
        return a+b;
    }
    
};
class derived1 : public derived
{
    public:
    int c=10;
    int sum()
    {
        return a+b+c;
    }
};

int main()
{

    derived1 obj;

    cout<<obj.sum();

    return 0;
}