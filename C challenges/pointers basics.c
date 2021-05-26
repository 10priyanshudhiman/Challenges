#include<stdio.h>
int main()
{
    int number = 20;
    int *pnumber = NULL;

    pnumber = &number;

    printf("Address of the pointer is : %p\n",(void*)&pnumber);
    printf("The value of the pointer is : %p\n",pnumber);
    printf("The value of the pointer point to is : %d",*pnumber);
}
