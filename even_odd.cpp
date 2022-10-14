#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int number;
    cout<<"Enter the number :";
    cin>>number;
    if(number%2 == 0)
    {
        cout<<"Number is Even "<<endl;
    }
    else{
        cout<<"Number is odd "<<endl;
    }
    getch();
    return 0;

}