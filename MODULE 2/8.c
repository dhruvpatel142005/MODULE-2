//Q-8. Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.

#include<stdio.h>

int fact(int num);
int fact(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{   
    int num;
   printf("\nEnter the num = ");
   scanf("%d",&num);
   int result = fact(num);
   printf("the factorial of %d is  = %d",num,result);
   return 0;
}

