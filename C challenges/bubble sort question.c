#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    int howMny,i,k=0;
    printf("Enter how many strings you want to enter :");
    scanf("%d",&howMny);

    char strings[howMny][20];
    char protoType[howMny][20];
    char protoType2[howMny][20];
    for(i=0;i<howMny;i++)
    {
        scanf("%s",&strings[i][0]);
    }

    printf("The Given Strings are :\n");
    for(i=0;i<howMny;i++)
    {

        printf("%s",&strings[i][0]);
        printf("\n");
    }

      printf("The copied strings are :\n");

         int j=0;
         while(j<howMny)
         {
             strcpy(&protoType[j][0],&strings[j][0]);
             j = j+1;
         }
         j=0;
         while(j<howMny)
         {
             strcpy(&protoType2[j][0],&strings[j][0]);
             j = j+1;
         }

    for(i=0;i<howMny;i++)
    {

        printf("%s",&protoType[i][0]);
        printf("\n");
    }



    while(k<howMny)
    {
        if(strcmp(&strings[k][0],&strings[k+1][0]) > 0)
        {
            strcpy(&strings[k][0],&strings[k+1][0]);
            strcpy(&strings[k+1][0],&protoType[k][0]);
            strcpy(&protoType[k+1][0],&protoType2[k][0]);


        }
        else if(strcmp(&strings[k][0],&strings[k+1][0]) < 0)
        {
            k++;
            continue;
        }
        else if(strcmp(&strings[k][0],&strings[k+1][0]) == 0)
        {
            k++;
            continue;
        }

        k++;
    }
    printf("After sorting\n");
    for(i=0;i<howMny;i++)
    {

        printf("%s",&strings[i][0]);
        printf("\n");
    }





}
