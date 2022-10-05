#include<iostream>
using namespace std;

class item
{

    int number;
    float cost;

    public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<<"Number:"<<number<<endl;
        cout<<"cost:"<<cost;
    }
};
void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x;
    cout<<"Object x\n";
    x.getdata(20,30.5);
    x.putdata();
    item y;
    cout<<"\nObject y\n";
    y.getdata(25,25.53);
    y.putdata();
}
