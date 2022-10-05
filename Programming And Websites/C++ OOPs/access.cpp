#include<iostream>
using namespace std;

class access
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
};

int main()
{
    access obj;
    // obj.x = 20;
    // obj.y = 25;
    obj.z = 50;
    cout<<"z value is:"<<obj.z;

    return 0;
}