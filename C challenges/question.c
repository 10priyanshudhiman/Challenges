#include<stdio.h>

int main()
{
    int numberOfSteps =0,i;
    int firstArry[50] = {5,6};
    int secondArry[50] = {4,3};

    for( i=0;firstArry[i] > secondArry[i];i++)
    {
        firstArry[i] = firstArry[i] - secondArry[i];
        numberOfSteps++;
    }
    if(firstArry[i] < secondArry[i])
    {
        numberOfSteps = -1;
    }
    printf("The number of steps are %d",numberOfSteps);
}
