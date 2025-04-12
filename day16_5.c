#include<stdio.h>
#define SIZE 3

typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}student;

int main()
{
    student std[SIZE];

    for (int i=0; i<SIZE; i++)
    {
        printf("student %d:\n",i+1);
        printf("Enter the rollno :");
        scanf("%d",&std[i].rollno);
        printf("Enter the name :");
        scanf("%s",&std[i].name);
        printf("Enter the marks :");
        scanf("%f",&std[i].marks);

    }

    printf("student details are :\n");

    for (int i=0;i<SIZE;i++)
    {
        printf("student %d :\n",i+1);
        printf("rollno %d :\n",&std[i].rollno);
        printf("name %s :\n",&std[i].name);
        printf("marks %.2f :\n",&std[i].marks);
    }
    return 0;
}