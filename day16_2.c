
#include<stdio.h>
#include<string.h>

struct student
{

    int rollno;
    char name[30];
    float marks;
};

int main()
{
    struct student s3;
    printf("enter the student info:\n");
    printf("enter the student rollno:\n");
    scanf("%d",&s3.rollno);

    printf("enter name :\n");
    scanf("%s",&s3.name);

    printf("enter marks :\n");
    scanf("%.2f",&s3.marks);

    printf("the student 3 details are :\n");
    scanf("rollno=%d" "name=%s" "marks=%.2f",s3.rollno,s3.name,s3.marks);

    return 0;
}