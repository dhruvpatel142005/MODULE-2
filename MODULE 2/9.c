
//Q-9. Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include<stdio.h>

int main()
{
    int b[5]={1,2,3,4,5},i;
    for ( i = 0; i <5; i++)
    {
        printf("\nthe value of b[%d] = %d",i,b[i]);
    }
    
    int row,col ,a[100][100],j,sum=0;
    printf("\nenter the value of row = 3");
    printf("\nenter the value of col =3 ");
   
   for (int  i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
        }    
    }
    for (int  i = 0; i < 3; i++)
    {
        for ( j = 1; j < 3; j++)
        {
            sum = sum + a[i][j] ;
        }    
    }
    printf("\nThe addition of the 3 x 3 matrix is = %d",sum);
    
    return 0 ;
}
