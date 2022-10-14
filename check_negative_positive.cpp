//Check Entered number is negative or positive
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the any number :";
    cin>>number;
    if(number<0){
        cout<<"Entered number is negative "<<endl;
    }
    else if(number == 0){
        cout<<"Entered Number is 0 ";
    }
    else{
        cout<<"Entered Number is Positive ";
    }
}