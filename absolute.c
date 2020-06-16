#include <stdio.h>
void main()
{
    int no, abs;
    printf("Enter a number to calculate absolute value:");
    scanf("%d", &no);
    if(no>=0)
    abs=no;

    abs=no*-1;
    printf("Absolute volue of %d is %d",no,abs);
}