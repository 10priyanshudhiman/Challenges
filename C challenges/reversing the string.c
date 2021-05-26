#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j;
    char string[50];
    printf("Enter the string you want to enter :");
    scanf("%s",string);

    printf("The length of the string is %d\n",strlen(string));

 int temp;
    for(i=0,j=strlen(string)-1;i<strlen(string)/2;i++,j--)
    {   temp=string[j];
        string[j]=string[i];
        string[i] = temp;
    }
    printf("%s",string);

}
