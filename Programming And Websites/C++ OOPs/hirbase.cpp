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
class derived1 : public multiplebase
{
    public:
    int c=10;
    int sum()
    {
        return a+c;
    }
};

int main()
{
    derived obj1;
    derived1 obj;
    cout<<obj1.sum()<<endl;
    cout<<obj.sum();

    return 0;
}