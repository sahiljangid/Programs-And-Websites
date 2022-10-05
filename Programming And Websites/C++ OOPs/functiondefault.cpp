#include<iostream>
using namespace std;

int sum(int x=0, int y=0, int z = 0, int w = 0)
{
    return (x+y+z+w);
}

int main()
{
    cout<<sum()<<endl;
    cout<<sum(10)<<endl;
    cout<<sum(10,15)<<endl;
    cout<<sum(10,15,25)<<endl;
    cout<<sum(10,15,25,30)<<endl;

    return 0;
}