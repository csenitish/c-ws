#include <stdio.h>
#include <math.h>
int factorial(int a)  			// function to calculate the factorial.
{
	int fact=1;
	while(a>0)
	{
		fact=fact*a;
		a=a-1;
	}
	return fact;
}
int main()
{
	int i,j=1;
	float series,x,k,y;
	printf("Enter a value of x in degree \n");
	scanf("%f",&x);
	y=x;
	x=(x*3.1415)/180; 			// as 'x' is in degree so converting 'x' to radian.
	k=((pow(x,j))/factorial(j));
	for(i=1;i<=10;i++,j=j+2)
	{
		series=series+k;
		k=k*-(pow(x,2)/((j+1)*(j+2)));
	}
	printf("The value of sin ( %f ) using first 10 terms is %f",y,series);
	return 0;
}