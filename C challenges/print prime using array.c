#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>
int main()
/*{
    int flag,k,i,j;
   int arr[100];
       for( k =5;k<100;++k)
       {
           int j=k;
           if(k%2==1)
           {
            while(j>3)
           {
               j= j-2;
               flag = k%j;
               if(flag ==0)
                break;
               else
                continue;
           }
           }
           else
            continue;
           if(flag != 0)
           {
               arr[k-5] = k;
               printf("\nThe value of arr[%d] is %d ",k-5,arr[k-5]);
           }
           else
            continue;
       }
}*/
//solution
{
    int p;
    int i;

    int primes[50];
    int primeIndex = 2;

    //Hardcode first two primes

    primes[0] = 1;
    primes[1] = 2;

    bool isPrime;

    for(p=5;i<=100;i=i+2)
    {
        isPrime = true;
        for(i=1; isPrime && p/primes[i]>=primes[i];++i)
        {
            if(p%primes[i] == 0)
            {
                isPrime = false;
            }
        }
        if(isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    for(i=0;i<=primeIndex;i++)
    {
        printf("%d ",primes[i]);


    }


}
