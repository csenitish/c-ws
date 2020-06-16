#include <stdio.h>
#include <conio.h>
void sum(int a,int b);
void rem(int a,int b);
void product(float c,float d);
void print();
int main()
{
int e,j,sw;
float g,h;
while(1)
{
printf("\n\n1.Sum of Two Integer.\n2.Reminder After Division of Two Number.\n3.Product of Two Float Number.\n4.Input and Print Word.\n5.Exit Progra.\n\nEnter any choice:");
scanf("%d",&sw);
switch(sw)
{
case 1:
sum(e,j);
break;
case 2:
rem(e,j);
break;
case 3:
product(g,h);
break;
case 4:
print();
break;
case 5:
return 0;
break;
default:
printf("\n\n\n!!!WRONG CHOICE!!!");
break;
}
}
getch();
return 0;
}
void sum(int a,int b)
{
int sum;
printf("Enter Two Number:\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d and %d Addition Reuslt is:%d",a,b,sum);
}
void rem(int a,int b)
{
int div;
printf("Enter Two Number:\n");
scanf("%d%d",&a,&b);
div=a/b;
printf("%d and %d Reminder After Division is:%d",a,b,div);
}
void product(float c,float d)
{
float prd;
printf("Enter Two Float Number:\n");
scanf("%f%f",&c,&d);
prd=c*d;
printf("%f and %f Product Reuslt is:%.2f",c,d,prd);
}
void print()
{
char x[20];
printf("Enter Word:");
scanf("%s",&x);
printf("Output 1:%s\nOutput 2:%s",x,x);
}