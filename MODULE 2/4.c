//Q-4. Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.


#include<stdio.h>
int main()
{    
    int num1,num2;

    printf("\nEnter the value of num1 = ");
    scanf("%d",&num1);
    printf("\nEnter the value of num2 = ");
    scanf("%d",&num2);

    printf("\nThe addition of numbers = %d",num1+num2);
    printf("\nThe subtraction of numbers = %d",num1-num2);
    printf("\nThe multiplication of numbers = %d",num1*num2);
    printf("\nThe division of numbers = %d",num1/num2);
    printf("\nThe remender of numbers = %d",num1%num2);

    printf("\nnum1 == num2: %d", num1 == num2);
    printf("\nnum1 != num2: %d", num1 != num2);
    printf("\nnum1 > num2: %d", num1 > num2);
    printf("\nnum1 < num2: %d", num1 < num2);
    printf("\nnum1 >= num2: %d", num1 >= num2);
    printf("\nnum1 <= num2: %d", num1 <= num2);
    
    printf("\nnum1 && num2: %d",num1 && num2);
    printf("\nnum1 || num2: %d",num1 || num2);
    printf("\n!num1: %d",!num1);
    printf("\n!num2: %d",!num2);

    return 0;
}
