#include<iostream>
using namespace std;

class singlebase
{
    public:
        int a=10;

};
class derived : public singlebase
{
    public:
    int b=10;
    int sum()
    {
        return a+b;
    }
};
int main()
{
    derived obj;
    cout<<obj.sum();
}