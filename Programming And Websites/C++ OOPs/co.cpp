#include<iostream>
using namespace std;

class co{
    public:
        int num;
        string s;

};

int main()
{
    co obj;
    obj.num = 15;
    obj.s = "sahil";
    cout<<"Number is:"<<obj.num<<endl;
    cout<<"String is:"<<obj.s;
}