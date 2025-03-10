//Q-10. Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

#include<stdio.h>
int main()
{    
    int num=10;
    int *ptr;
    ptr = &num;
    printf("\nThe original value of num = %d",num);
    *ptr=20;
    printf("\nThe modified value of num = %d",*ptr);
    return 0;
}
