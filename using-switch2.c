#include <stdio.h>
int main()
{
    char ch;
    printf("enter any one of the alphabets a, b, or c");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':
        printf("a as in ashar\n");
        break;

        case 'b':
        case 'B':
        printf("b is in brain\n");
        break;

        case 'c':
        case 'C':
        printf("c as in cookie\n");
        break;

        default:
        printf("weish you knew what are alphabets\n");
        return 0;


    }
}