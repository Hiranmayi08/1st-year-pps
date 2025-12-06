#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a munber:");
    scanf("%d", &n);
    if (n<=1)
    {
        printf("%d is not a prime number.\n", n);
    }
    else{
        for(i=2;i<n;i++)
        {
            if (n%i==0)
            {
                printf("%d is not a prime number.\n", n);
                break;
            }
        }
    
    {
        printf("%d is a prime number.\n", n);
    }
    }
    return 0;

}