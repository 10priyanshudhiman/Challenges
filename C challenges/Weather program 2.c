#include<stdio.h>
int main()
{
    int i,j;
    float weathProgram[5][12];

    float yearAvg = 0.0,monthAvg = 0.0,yearlyAvg = 0.0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<12;j++)
        {
            printf("The value for rainfall for the %d year and %d month :",i+1,j+1);
            scanf("%f",&weathProgram[i][j]);
            yearAvg = (yearAvg + weathProgram[i][j])/2;

        }
        printf("The average rainfall for %d year is %f :\n",i+1,yearAvg);
        yearlyAvg = yearlyAvg + yearAvg;
        yearAvg = 0.0;
    }
    printf("The yearly average for the five years is %f\n",yearlyAvg);
    for(i=0;i<5;i++,j=0)
    {
        monthAvg = (monthAvg + weathProgram[i][j])/2;

    }
    printf("The average rainfall for the months in all five years is %f :",i+1,monthAvg);
    monthAvg =0.0;
}
