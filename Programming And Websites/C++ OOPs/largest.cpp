#include<iostream>
using namespace std;

class largest
{
    int a,b,m;
    public:
    void setdata();
    friend void max(largest);
};

void largest::setdata()
{
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
}

void max(largest t)
{
    if(t.a>t.b)
        t.m = t.a;
    else
        t.m = t.b;

    cout<<"Maximum number is : "<<t.m<<endl;
}



int main()
{
    largest l;
    l.setdata();
    max(l);

    return 0;
}