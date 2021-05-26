#include<stdio.h>

int squareNumber(int *number);
int main()
{
    int prototype;
    printf("Enter the number : ");
    scanf("%d",&prototype);

    printf("The square of the number is %d",squareNumber(&prototype));

}

int squareNumber(int *number)
{
    int square = 0;
    while(*number)
    {
        square = square + *number; ///complete any time
        *number--;
    }

    return square;
}
