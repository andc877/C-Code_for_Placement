#include<stdio.h>
#include<conio.h>
void main()
{
    int mynum = 15;
    float myfloat = 9.4;
    char mychar = 'd';
    // now print this variables
    printf("%d\n",mynum);
    printf("%f\n",myfloat);
    printf("%c\n",mychar);

    //You can do any operation with variable
    printf("%d\n",mynum+mynum);

    printf("This is %d a number \n this is %c a character \n this is %f a float number ",mynum,mychar,myfloat);

    //Assign same value in many variables
    int a,b,c;
    a = b = c = 10;
    printf("\n%d %d %d ",a,b,c);

}