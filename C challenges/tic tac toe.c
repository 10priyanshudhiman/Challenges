#include<stdio.h>
#include<stdlib.h>

int i,j;
char numbers[3][3] = {
                      {'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}
                      };
void drawBoard();
void markBoard(char x,char m);



int main()
{


    char y,m;

    drawBoard();
    scanf("%c %c",&y,&m);
    printf("nn");
    void markBoard(char y,char m);
    drawBoard();



}
void drawBoard()
{


   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%c ",numbers[i][j]);
       }
       printf("\n");
   }
}
void markBoard(char x,char move)
{
    printf("nn");


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x == numbers[i][j])
            {
                numbers[i][j] = move;
            }

        }
    }
    printf("%c",numbers[i][j]);

}
