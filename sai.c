#include<stdio.h>
struct employee
{
 char name[10];
 int age;
 char gender;
 int salary;
}__attribute((packed));

int main()
{

struct employee emp;
printf("%d",sizeof(emp));
return 0;
}
