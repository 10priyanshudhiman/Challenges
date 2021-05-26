#include<stdio.h>
int main()
{
    FILE *pr;
    char arr[51];

    pr = fopen("file.text","r");

    if(pr == NULL)
    {
        perror("Error is opening the file");
        return -1;

    }
    if(fgets(arr,50,pr)!= NULL)
    {
        printf("%s",pr);
    }
    fclose(pr);
    pr = NULL;
    return 0;
}
