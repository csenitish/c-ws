#include <stdio.h>

int main() 
{
  int a, b;
  
  printf("Enter the Number:\n");
  scanf("%d",&b);
  for(a=0;a<=10;a++)
  {
    printf("%dx%d = %d\n",a,b,a*b);
  }
  return 0;
}