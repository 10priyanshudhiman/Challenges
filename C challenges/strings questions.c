#include<stdio.h>
#include<stdbool.h>

int stringLength(char length[]);
void concatenateString(const char string1[],const char string2[],char result[50]);
bool stringEqual( char string1[],char string2[]);

int main()
{
    char length[50];
    printf("Enter the string less than 50 characters :");
    scanf("%s",length);
    stringLength(length);
    printf("The length of the string is : %d\n",stringLength(length));

     const char string1[] = "The string is ";
    const char string2[] = "Concatenated ";
    char result[50];
    concatenateString(string1,string2,result);

    bool stringEqual(string1,string2);

    if( stringEqual(string1,string2) == true)
    {
        printf("\nThe two strings are equal");
    }
    else
    printf("\nThe two strings are not equal");

}

/************
Function to calculate the string length
************/
int stringLength(char length[])
{
    int count=0;
    while(length[count]!= '\0')
    {
        count++;
    }
    return count;
}

/************
Function to concatenate two strings
************/

void concatenateString(const char string1[],const char string2[],char result[50])
{
    int i,j;
    for(i=0;string1[i] != '\0';i++)
       {
           result[i] = string1[i];

       }
   for(j=0;string2[j] != '\0';j++)
   {
       result[i] = string2[j];
       i++;
   }
   result[i+j] = '\0';

   printf("%s",result);

}

/*******************
Function to Check the equality of the two strings
*******************/
_Bool stringEqual(char string1[],char string2[])
{
     bool isTrue =true,isFlase=false;
    int i,flag;
    for(i=0;string1[i] != '\0';i++)
    {
        if(string1[i] == string2[i])
        {
            flag = 1;
        }
        else
            flag = 0;
    }
        if(flag == 1)
        {
            return true;
        }
        else
            return false;
}
