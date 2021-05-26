#include<stdio.h>
#include<stdlib.h>

/****************** DEBUG IT****************/

void readItem(pointer);
void printItem(pointer);
struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
} ;

int main()
{
     struct item vari, *pointer;
    pointer = &vari;

    pointer->itemName = (char *) malloc(30*sizeof(char));
    if(pointer == NULL)
    {
        return -1;
    }

    readItem(pointer);

    printItem(pointer);

    free(pointer->itemName);

}


void readItem(struct item *pointer)
{
    printf("Enter the item name :");
   scanf("%s",&(*pointer).itemName);

   printf("Quantitiy : ");
   scanf("%d",&(*pointer).quantity);

   printf("Price : ");
   scanf("%f",&pointer->price);

}
void printItem(struct item *pointer)
{
    printf("\n The Given output is : \n");

    printf("Item \t Quantity \t Price \t\n");

    printf("%s",&pointer->itemName);
    printf("\t%d",pointer->quantity);
    printf("\t%f",pointer->price);
    pointer->amount = pointer->quantity*pointer->price;
    printf("\n%f",pointer->amount);
}

