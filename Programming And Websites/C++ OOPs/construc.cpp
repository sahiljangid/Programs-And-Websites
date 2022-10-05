#include<iostream>
using namespace std;

class construc
{
    private:
        string name;
        int age;

    public:
    void display()
        {
            cout<<"Name of person is: "<<name<<endl;
            cout<<"Age of  person is: "<<age<<endl;
        }
        construc()
        {
            cout<<"Default constructor is called"<<endl;
            name = "Sahil";
            age = 19;
        }
        ~construc()
        {
            cout<<"I am destructor of this class"<<endl;
        }

        
};

int main()
{
    construc obj;
    obj.display();

    return 0;
}