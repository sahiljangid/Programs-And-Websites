#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

int main()
{
    fstream new_file;
    new_file.open("s.txt",ios::out);
    new_file<<"How are you";
    new_file<<"\nI am fine";
    new_file.close();

    return 0;
}