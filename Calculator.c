//Calculator in c Language
#include<stdio.h>
#include<conio.h>
void main()
{
    char option;
    int first_number ,second_number;
    printf("Enter the operator (+, -, /, *: ) ");
    scanf("%c",&option);
    printf("Enter the first number :");
    scanf("%d",&first_number);
    printf("Enter the second Number :");
    scanf("%d",&second_number);

    //USe switch for making a decision
    switch(option){
        case  '+':
        printf("%d + %d = %d",first_number,second_number,first_number+second_number);
        break;

        case '-':
        printf("%d - %d = %d",first_number,second_number,first_number-second_number);
        break;

        case '*':
        printf("%d * %d = %d",first_number,second_number,first_number*second_number);
        break;

        case '/':
        printf("%d / %d = %d",first_number,second_number,first_number/second_number);
        break;

        default:
        printf("Error! Please Enter the Valid operator: ");
        break;
    }
    getch();
    
}