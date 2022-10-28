#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float principal,rate, time,Simple_interest;
    cout<<"\n Calculate simple Interest : ";
    cout<<"Input the Principal :";
    cin>>principal;
    cout<<"Input the rate :";
    cin>>rate;
    cout<<"Input the time :";
    cin>>time;
    //Simple interest formula
    Simple_interest = (principal*rate*time)/100;
    cout<<" The Simple Interest is :"<<" "<<Simple_interest;
    getch();
    return 0;
    
}