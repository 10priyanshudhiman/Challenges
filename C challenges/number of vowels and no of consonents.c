#include<stdio.h>
#include<string.h>
int main()
{
    int i,num=0,consunents,vowles=0;
    char str[50];
    scanf("%s",str);
    strlen(str);
    printf("%d\n",strlen(str));
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        num++;
        else if(str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u')
        {
            vowles++;
        }

    }
    consunents = strlen(str)-num-vowles;
    printf("number in string are :%d\n",num);
    printf("vowles in string are :%d\n",vowles);
    printf("consunents in strings are :%d\n",consunents);
}
