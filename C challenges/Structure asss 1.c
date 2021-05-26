#include<stdio.h>
#include<stdlib.h>


struct employee
    {
        char name[50];
        char hireDate[50];
        float salary;
    };


int main()
{
    struct employee emp = {"JAson","21/2/2018",23456.65};

    printf("Name is %s\n",emp.name);
    printf("hire date is %s\n",  emp.hireDate);
    printf("salary is %f\n",emp.salary);

}
