#include<stdio.h>
int main()
{
    float salary,totalhours;
    printf("enter basic salary:");
    scanf("%f", &salary);
    printf("enter total hours worked:");
    scanf("%f", &totalhours);
    if (totalhours > 180)
    salary+=0.10*salary;
    printf("total salary = %.2f\n", salary);
    return 0;
}
