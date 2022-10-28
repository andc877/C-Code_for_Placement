//Square and cube of Number
#include<iostream>
#include<conio.h>
using namespace std;

int square(int num)
{
    return num*num;
}

int cube(int num2)
{
    return num2*num2*num2;
}
int main()
{
    int num,num2;
    cout<<"Enter the number for square :";
    cin>>num;
    cout<<"Enter the number for cube :";
    cin>>num2;
    cout<<"Sqaure of number is "<<square(num);
    cout<<"\nCube of number is "<<cube(num2);
    getch();
    return 0;
}