#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;
    cout<<"Enter value";
    cin>>*ptr;
    cout<<"Value is: "<<*ptr;
    delete ptr;
    cout<<"Value is: "<<*ptr;

    return 0;
}