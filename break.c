#include <stdio.h>
int main()
{
    int num,i;
    
   
    printf("Enter the Numbert");
    scanf("%d",&num);
    i=2;
    
    while(i<=num-1)
    {
        if(num%i==0)
        {
        printf("Not a prime numbert\n");
          break;
        }
          i++;
    }
    
    if(i==num)
    printf("prime number\n");
    
    
}