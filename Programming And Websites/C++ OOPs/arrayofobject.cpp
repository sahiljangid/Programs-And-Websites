#include<iostream>
using namespace std;

class arrayofobject
{
    char name[20];
    int age;
    public:
        void getdata(void);
        void putdata(void);
};

void arrayofobject::getdata(void)
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}

void arrayofobject::putdata(void)
{
    cout<<"Name is : "<<name<<"\n";
    cout<<"Age is: "<<age<<"\n";
}

const int size = 3;

int main()
{
    /* code */
    arrayofobject manager[size];

    for(int i = 0; i<size; i++)
    {
        cout<<"\nDetails of manager"<<i+1<<"\n";
        manager[i].getdata();
    }

    cout<<"\n";

    for(int i = 0; i<size; i++)
    {
        cout<<"Manager"<<i+1<<"\n";
        manager[i].putdata();
    }

    return 0;
}
