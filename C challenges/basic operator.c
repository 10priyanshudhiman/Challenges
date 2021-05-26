#include<stdio.h>
int main()
/*{
    int a =33;
    printf("a is %d",++a);
}*/
/*{
     int a = 587574676556;
     int  b = 2;
     int result;

    result = !a;
    printf("%d",result);
}*/
//Bit wise operator
/*{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; //0000 1101

    int result = 0;
    int c = a |b;
    //0011 1101

    printf("result is %d", c);

    c = a&b;
}*/
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; //0000 1101

    int result = 0;
    int c = a << 4 ;
    //0011 1100 0000

    printf("result is %d", c);
}

