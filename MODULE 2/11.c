//Q-11. : Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().

#include<stdio.h>
#include<string.h>
int main()
{    
    char str1[100],str2[200];
    printf("\nEnter the value in str1 = ");
    gets(str1);
    printf("\nEnter the value in str2 = ");
    gets(str2);

    strcat(str1,str2);
    printf("\nThe concatenated string str1 = %s",str1);
    printf("\nThe length string str1 = %d",strlen(str1));

    return 0;
}
