//Simple calculator in Cpp Language, Cpp Calculator Program
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char option;
    float number1,number2;
    cout<<"Enter Operator: +, -, *, /: ";
    cin>>option;
    cout<<"Enter the first number :";
    cin>>number1;
    cout<<"\nEnter the Second number: ";
    cin>>number2;
    //Now use Switch case for make a decisions
    switch(option)
    {
        case '+':
        cout<<number1 <<" + " <<number2 <<" = " << number1+number2;
        break;
        
        case '-':
        cout<<number1 <<" - " <<number2 <<" = " <<number1-number2;
        break;

        case '*':
        cout<<number1 << " * " <<number2 << " * " <<number1*number2;
        break;

        case '/':
        cout<<number2 << " / " <<number2 <<" / "<<number1/number2;
        break;

        //For wrong expression
        default:
        cout<<"Error! operator is not correct :";
        cout<<"\nPlease enter the correct Option :";
        break;
    }
        //For screen Hold
        getch();
        return 0;

}
//Thanks for watching Code links in description