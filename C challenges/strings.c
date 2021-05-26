#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char str1[20],str2[20];
  printf("Enter the first string :");
  scanf("%s",str1);
  printf("Enter the second string :");
  scanf("%s",str2);
  for(i = 0;str1[i] != '\0';i++);
  i++
  for(j=0;str2[j] != '\0';i++,j++)
  {
      str1[i] = str2[j];
  }
  str1[i] = '\0';
   printf("The catenated string is : %s",str1);
}
