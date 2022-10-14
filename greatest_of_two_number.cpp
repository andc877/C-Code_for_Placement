//Greatest of two number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    if(num1 == num2){
        cout<<"Both are equal ";
    }
    else if(num1>num2){
        cout<<num1<<" is greater ";
    }
    else{
        cout<<num2<<" is greatr ";
    }
    getch();
    return 0;
}