#include <stdio.h>
int main()
{
    float gross_salary, net_salary;
    printf("Enter gross salary of an employee\n");
    scanf("%f",&gross_salary);
    if(gross_salary < 10000)
    net_salary = gross_salary;
    if(gross_salary >= 10000)
    net_salary = gross_salary - gross_salary*15/100;
    printf("\nNet salary is Rs.%.2f\n",net_salary);
    
    return 0;
}