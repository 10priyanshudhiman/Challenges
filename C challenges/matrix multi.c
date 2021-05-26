#include<stdio.h>
int main()
{
    int arry[3][2];
    int i,j,k,m;
    for(j = 0;j<3;j++)
    {
        for(i = 0;i<2;i++)
        {
            printf("Enter the two dimensional array");
            scanf("%d",&arry[j][i]);
        }
    }
    for(k = 0;k<3;k++)
    {
        for(m = 0;m<2;m++)
        {
            printf("%d ",arry[k][m]);
        }
        printf("\n");
    }
}
