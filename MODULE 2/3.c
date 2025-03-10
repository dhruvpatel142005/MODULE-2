//Q-3. Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.


#include<stdio.h>
int main()
{    
    int age=20;
    char grade = 'A';
    float marks = 89.343;
    const int months_in_year = 12;



    printf("\nAge = %d",age);
    printf("\ngrade = %c",grade);
    printf("\nmarks = %.2f",marks);
    return 0;
}
