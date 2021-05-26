#include<stdio.h>
int main()
{
    int totalHrs,grossPay;
    float payRate,netPay;

    printf("Enter the number of hours you work in a week :");
    scanf("%d",&totalHrs);

    if(totalHrs <= 40)
    {
        grossPay = 12*totalHrs;
        printf("The gross pay is : %d",grossPay);

    }
    else if(totalHrs > 40)
    {
        grossPay = 18*(totalHrs-40);
        grossPay = 12*40 + grossPay;
        printf("The gross pay when hrs > 40 is : %d",grossPay);
    }
    if(grossPay <= 300)
    {
        payRate = 0.15*grossPay;
        printf("\nThe taxes are : %f",payRate);
    }
    else if(grossPay <= 450)
    {
        payRate = 0.20*(grossPay-300);
        payRate = 0.15*300.0 + payRate;
        printf("\nThe taxes for gross < 450 is %f",payRate);
    }
    else if(grossPay > 450)
    {
        payRate = 0.25*(grossPay-450);
        payRate = 0.15*300.0 + 0.2*150.0 + payRate;
        printf("\nThe taxes for gross > 450 is %f",payRate);
    }
    netPay = grossPay - payRate;
    printf("\nThe net Pay is %f",netPay);

}
