#include<stdio.h>

void copyString(char to[20], char from[]);
void copyString2(char *to, char *from);

int main()
{
    char to[20] = "The string";
    char from[20] = "is copied";

    copyString(to,from);
    copyString2(to,from);

    printf("%s",to);
}

void copyString(char to[20], char from[])
{
    int i=0;
    for(i=0;from[i]!= '\0';i++)
    {
        to[i] = from[i];

    }
    to[i] = '\0';
    printf("The copied string is %s ",to);
}
void copyString2(char *to, char *from)
{


    for( ; *from != '\0';from++,to++)
        *to = *from;

    *to = '\0';

    printf("%s",to);
    printf("nn");


}
