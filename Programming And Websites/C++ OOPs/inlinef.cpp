#include<iostream>
using namespace std;

inline int cube(int s)
{
    return s*s*s;
}

int main()
{
    cout<<"The cube of 7 is:"<<cube(7)<<"\n";

    return 0;
}