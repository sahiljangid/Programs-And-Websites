#include<iostream>
using namespace std;

struct Person
{
    char name[100];
    int age;
    double salary;
};

int main()
{
    Person p1;
    cout<<"Person details"<<endl<<"Enter Person name:"<<endl;
    cin.getline(p1.name,100);
    cout<<"Enter age:"<<endl;
    cin>>p1.age;
    cout<<"Enter salary:"<<endl;
    cin>>p1.salary;

    cout<<"\nPerson details are as follows:"<<endl;
    cout<<"Person Name:"<<p1.name<<endl;
    cout<<"Person age:"<<p1.age<<endl;
    cout<<"Person salary:"<<p1.salary;

    return 0;
}