void swap(int x,int y)
{
 int t=x;
 x=y;
 y=t;
 printf("\nln fn:%d &y =%d",x,y);
 }
void swap(int,int);
void main()
{

    int a=5,b=7;
    swap(a,b);
    printf("\n After swap :a=%d&b=%d",a,b);
}

