#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your Age :";
    cin>>age;
    if(age<18)
    {
        cout<<"You are not eligible to vote "<<endl;
    }
    else{
        cout<<"You are Eligible to vote ";
    }
    getch();
    return 0;
}