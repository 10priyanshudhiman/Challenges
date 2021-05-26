#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *pr;
    int c;

    pr = fopen("myfile.txt", "r");

    if(pr == NULL)
    {
        perror("File is not open");
        return -1;

    }
    while(c = fgetc(pr) != EOF )
    {
        printf("%c",c);

    }
    fclose(pr);
    pr = NULL;

    system("pause");

}
