#include<stdio.h>
factorial(int a);
int main()
{
    int n;
    printf("Enter the number you want factorial :");
    scanf("%d",&n);
    printf("The answer is %d",factorial(n));

}
factorial(int a)
{
    if(a == 0 || a == 1)
        return 1;
    else
        return a * factorial( a-1);
}
