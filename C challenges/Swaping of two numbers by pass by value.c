#include<stdio.h>
#include<string.h>

void swapNumbers(int x, int y);
int main()
{
    int x = 100;
    int y = 200;

    printf("The value of x before swapping is %d\n",x);
    printf("The value of y before swapping is %d\n",y);

    swapNumbers(x,y);

    printf("The value of x after swapping is %d\n",x);
    printf("The value of y after swapping is %d\n",y);

}
void swapNumbers(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

}
