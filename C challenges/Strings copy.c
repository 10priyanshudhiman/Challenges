#include<stdio.h>

#include<string.h>

/*int main()
{
    char myString[] = "My name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("The string is: %s", temp);

}

int main()
{
    char src[50], dest[50];

    strcpy(src,"This is the string");
    strcpy(dest,"This is the destination");

    strncat(src, dest, 26);

    printf("The final destination string is : |%s|",src);

    return 0;
}*/

// tokenizing a string

int main()
{
    char str[80] = "Hellow how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    //get the first token//
    token = strtok(str,s);

    //walk through other tokens//

    while( token != NULL)
    {
        printf("%s\n",token);

        token = strtok(NULL,s);
    }

    return(0);


}
