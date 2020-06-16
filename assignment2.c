#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int);
int main()
{
    int x,n;
    double sinx;
    sinx=0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Enter the value of x for the series : ");
    scanf("%f",&x);
    for(int i=1;i<=n;i++)
    {
        sinx+=pow(-1,(n+1))*(x,(2*n)-1)/factorial((2*n)-1);

    }
    printf(" The sum of sin(%d) for %d terms is : ",x,n,sinx);
    return 0;
    getch();

}
factorial( int n)
{
    double fact;
    if(n==1)
    return 1;
    else
    fact=n*factorial(n-1);
 return fact;
 
}