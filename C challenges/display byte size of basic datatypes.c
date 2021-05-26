#include<stdio.h>
int main()
{
    printf("Size of character is %d byte\n",sizeof(char));
    printf("Size of long long is %u\n",sizeof(long long));
    printf("size of integer is %zd byte\n",sizeof(int));
    printf("size of long is %zd byte\n",sizeof(long));
    printf("size of double is %zd byte\n",sizeof(double));
    printf("size of float is %zd byte\n",sizeof(float));
}
