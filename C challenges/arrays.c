#include<stdio.h>
int main()
{
    int grades[10]; //Array which stores 10 values
    int count = 10;// Number of values to be read
    long sum = 0; // Sum of the numbers
    float average = 0.0f; //Average of the numbers

    printf("\nEnter the 10 grades:\n"); //prompt for the input

    //Read the ten numbers to be averaged
    int i;
    for(i=0;i<10;i++)
    {
        printf("%2u> ",i + 1);
        scanf("%d", &grades[i]); //Read a grade
        sum += grades[i]; // Add it to the sum
    }

    average = (float)sum/count;

    printf("The average of ten numbers entered is: %.2f\n",average);


}
