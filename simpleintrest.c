#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    float simpleintrest, compoundintrest;
    printf("Enter the principal amount:");
    scanf("%f", &principal);
    printf("enter annual intrest rate");
    scanf("%f", &time);
    printf("enter the time in years:");
    scanf("%f", &rate);
    simpleintrest=(principal*rate*time)/100;
    compoundintrest=principal*pow((1+rate/100),time)-principal;
    printf("simple intrest = %.2f\n",simpleintrest);
    printf("compound intrest = %.2f\n", compoundintrest);
    
    return 0;

}
