#include<stdio.h>
#pragma pack(1)

struct student 
{
    char grade;
    
    double marks;

    char name[20];
};

int main()
{
    struct student s1;
    printf("size of s1=%d\n",sizeof(s1));
    return 0;
}