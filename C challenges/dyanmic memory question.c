#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *string = NULL;
    int limit;

    printf("The limit of the string is :");
    scanf("%d",&limit);

    string = (char*)malloc(limit);

    strcpy(string,"priyanshhu");

    printf("%s",string);


}
