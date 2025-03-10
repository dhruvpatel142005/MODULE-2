//Q-5. Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.).


#include<stdio.h>
int main()
{   
    int a,month;

    printf("\nEnter the value of a = ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d is a odd number",a);
    }

    printf("\nEnter the number of month = ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:printf("\nJanuary");
        break;
        case 2:printf("\nFebruary");
        break;
        case 3:printf("\nMarch");
        break;
        case 4:printf("\nApril");
        break;
        case 5:printf("\nMay");
        break;
        case 6:printf("\nJune");
        break;
        case 7:printf("\nJuly");
        break;
        case 8:printf("\nAugust");
        break;
        case 9:printf("\nSeptember");
        break;
        case 10:printf("\nOctober");
        break;
        case 11:printf("\nNovember");
        break;
        case 12:printf("\nDecember");
        break;
    }

    return 0;
}
