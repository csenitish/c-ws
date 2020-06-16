#include <stdio.h>
#define pi 3.14
void area();
void main()
{
    area();
}
void area()
{
    int radius=5;
    float area=pi*radius*radius;
    printf("area is %f",area);
}