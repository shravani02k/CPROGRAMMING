#include<stdio.h>

struct employee
{
    int empid;
    char name[20];
    float salary;

};

typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}std;

struct 
{
    int num1;
    char ch;
}d1;

typedef struct 
{
    int n1;
    char ch2;
}demo;

int main()
{
    struct employee e1;
    typedef struct employee emp;
    emp e2;
    std s1;

    return 0;
}