#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si;
    count = 1;
      while(count<=5)
      {
          printf("\n inter the vale of p, n and r");
          scanf("%d %d %f",&p,&n,&r );
          si= p * n * r / 100;
          printf("simple interest = RS %f\n",si );
          count = count + 1;
      }
      return 0;
}