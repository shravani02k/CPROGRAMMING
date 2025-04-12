#include<stdio.h>


struct employee
{
    int empid;
    char name[20];
    float salary;
};
 int main()
 {
    struct employee e1={1001,"yogesh",200000};
    struct employee *ptr=&e1;

    printf("employee info using e1 variable:\n");
    printf("%d %s %.2f",e1.empid,e1.name,e1.salary);

    printf("\nemployee info using ptr variable:\n");
    printf("%d %s %.2f \n",ptr->empid,ptr->name,ptr->salary);

    return 0;

 }