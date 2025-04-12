#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    int num1=10;
    struct student s1={39,"shravani",80.20f};
    struct student s2;
    s2.rollno=40;
    strcpy (s2.name,"yogesh");
    s2.marks=85.02f;

    printf("student 1 :\n");
    printf("rollno =%d name=%s marks=%.2f\n",s1.rollno,s1.name,s1.marks);

    printf("student 2 :\n");
    printf("rollno=%d\n",s2.rollno);
    printf("name=%s\n",s2.name);
    printf("marks=%.2f\n",s2.marks);

    return 0;

}