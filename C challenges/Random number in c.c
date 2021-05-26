#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int j,k;
   time_t t;

   srand((unsigned)time(&t));

   int randomNumber = rand()%21;
   printf("The random number is : %d\n",randomNumber);
   for(int i=1;i<=5;++i)
   {
       k = 6 - i;
       printf("You have %d tries left\n",k);
       printf("Enter the guess :");
       scanf(" %d",&j);
       while(i)
       {
           if(j>20 || j<0)
           {
               printf("Wrong,Please enter the number between 0-20 :");
               scanf("%d",&j);
               break;
           }
           else
            if(j>=0 && j<= 20)
            break;
       }
       if(j < randomNumber)
       {
           printf("\nsorry,Your guess is less than the number\n");
       }
       else if(j> randomNumber)
       {
           printf("\nsorry,Your guess is greater than the number\n");
       }
       else if(j == randomNumber)
       {
           printf("\nCongratulation, You Win The Game\n");
           break;
       }
   }
   if(j == randomNumber)
    printf("YEAH!");
   else
    printf("You Loose :");

}
