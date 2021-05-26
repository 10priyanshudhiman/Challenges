#include<stdio.h>
int main(void)
{
/*
    int number =0;  // declaring a number and initializing a value equals to zero.
    int *pnumber = NULL; //a pointer that can point to a type int.

    number = 10;
    printf("number's address is %p\n", &number); // output the address
    printf("number's value is %d\n\n", number); // output the value

    pnumber = &number;               //stores the address of the number in pnumber,
    printf("pnumber's address : %p\n", (void*)&pnumber); //output the address.
    printf("pnumber's size : %d bytes\n",sizeof(pnumber)); //output the size.
    printf("pnumber's value: %p\n", pnumber); // output the value.
    printf("value pointed to : %d\n",*pnumber);// output the address.
    return 0;
*/

int i;

char multiple[] = "a string";
char *p = multiple;

for(i=0;i<strlen(multiple);i++)
{
    printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",i, multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
}


}
