#include<stdio.h>
int main()
{
    char another;
    int num;
    
    while (another == 'y');
    {
        printf("enter the number");
        scanf("%d",&num);
        printf("square of %d id %d\n",num,num*num);
        printf("want to enter another number y/n");
        fflush(stdin);
        scanf("%c", &another);

    }
    return 0;
    
}