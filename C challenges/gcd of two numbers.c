#include<stdio.h>
#include<stdlib.h>
#include<math.h>


    //writing a program to find the gcd of two non negative integer value.
    //declaring two functions.
    int gcd(int x,int y);
    int absoluVlaue(int z);
    float sqrtFunction(float k);


     main()
    {
        int firstNumber,secondNumber;
        printf("Enter the first integer :");
        scanf("%d",&firstNumber);
        absoluValue(firstNumber);

        printf("\nEnter the second integer :");
        scanf("%d",&secondNumber);


        gcd(firstNumber,secondNumber);

    }
    int gcd(int x,int y)
    {
        int num,result;
        if(x<y)
            num = x;
        else
            num = y;
            while(num!=1)
            {
                if(x%num==0 && y%num == 0)
                {
                    result = num;
                    break;
                }
                else
                    num--;
            }
            printf("The gcd of two integers is %d\n",result);
            sqrtFunction(result);

    }
    int absoluValue(int z)
    {
        if(z<0)
        {
            z=-z;
            printf("The absolute value is : %d",z);
            return z;
        }
        else
            return z;
    }
    float sqrtFunction(float k)
    {
        k = sqrt(k);
        printf("The square root is : %f",k);
    }



