#include<stdio.h>
int main()
{
    int second;
    double days,years;
    double minutesInYears;
    minutesInYears = (24 * 60 * 365);
    printf("Enter the minutes you want to convert :");
    scanf("%d",&second);

    days = ((1.0/60.0)/24.0)*second;
    years = ((1.0/minutesInYears)*second);

    printf("\nseconds which are converted to days are : %lf\n",days);
    printf("\nseconds which are converted to years are : %lf\n",years);



}
