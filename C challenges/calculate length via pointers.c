#include<stdio.h>

int stringLength(const char *length);
int main()
{
    const char *length = "myname";
    printf("%d",stringLength(length));

}

int stringLength(const char *length)
{
    int sum=0;
    while(*length)
    {
        sum++;
        *(++length);

    }
    return sum;
}
