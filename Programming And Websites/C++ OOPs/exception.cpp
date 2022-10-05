#include<iostream>
using namespace std;

int main()
{
    int x = -1;

    cout<<"Before try\n";
    try
    {
        cout<<"Inside try\n";
        if(x<0)
        {
            throw x;
            cout<<"After throw";
        }
    }
    catch(int e)
    {
        cout<<"Exception catught\n"<<e<<"\n";
    }
    cout<<"After catch";

    return 0;
    
}