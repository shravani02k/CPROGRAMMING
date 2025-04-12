#include<stdio.h>

typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}std;

int main()
{
    std s1={39,"yogesh",89.80f};
    std s2;
    s2=s1;
    printf("s1=%d %s %.2f\n",s1.rollno,s1.name,s1.marks);
    printf("s2=%d %s %.2f\n",s2.rollno,s2.name,s2.marks);

    return 0;
}