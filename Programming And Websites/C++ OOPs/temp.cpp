#include<iostream>
using namespace std;

template<typename T>
class A
{
    T max(T x, T y)
    {
        return (x>y)? x : y; 
    }
};

int main()
{
    cout<<max(20,21)<<"\n";
    cout<<max(2.3,5.3)<<"\n";
    cout<<max('g','e');

    return 0;
}