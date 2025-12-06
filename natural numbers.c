#include <stdio.h>
int main()
{
    int n,i;
    long product=1;
    printf("enter a number:");
    scanf("%d", &n);
    for (i=1;i<n;i++)
    {
        product=product*i;
    }
    printf("product of numbers from 1 to %d=%ld\n", n,product);
    return 0;
}