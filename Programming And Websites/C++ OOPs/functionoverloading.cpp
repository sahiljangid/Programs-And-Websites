#include<iostream>
using namespace std;

class functionoverloading
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }

        int add(int a, int b, int c)
        {
            return a+b+c;
        }

        int add(int a, int b, int c, int d)
        {
            return a+b+c+d;
        }
};

int main()
{
    functionoverloading obj;
    cout<<"This is first function \n";
    cout<<obj.add(20,20)<<"\n";
    cout<<"This is second function \n";
    cout<<obj.add(20,20,20)<<"\n";
    cout<<"This is third function \n";
    cout<<obj.add(20,20,20,20);
}