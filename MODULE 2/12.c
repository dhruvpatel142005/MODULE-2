//Q-12. Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them.

#include<stdio.h>
struct student
{
    int id;
    int marks;
    char name[10];
};
int main()
{    
    struct student s[50];
    int count,i;

    printf("\nEnter the count = ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("\nEnter the details for student %d ",i+1);
        printf("\nname = ");
        scanf(" %c",&s[i].name);
        printf("\nID = ");
        scanf("%d",&s[i].id);
        printf("\nMarks = ");
        scanf("%d",&s[i].marks);
        
    }
    printf("\nName\tId\tmarks");
    for(i=0;i<count;i++)
    {
        printf("\n%c\t%d\t%d",s[i].name,s[i].id,s[i].marks);
    }
     return 0;
}
