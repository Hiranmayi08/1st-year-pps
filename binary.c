#include <stdio.h>
int main()
{
    int num;
    printf("enter a number between 0 and 255:");
    scanf("%d", &num);
    if (num<0||num>255)
    {
        printf("invalid input.\n");
        return 1;
    }
    {
    printf("binary equivalent of %d is:", num);
    for (int i=7; i>=0; i--)
    int bit= (num>>i) &1;
   printf("%d", bit);
    }
    printf("\n");
    return 0;
}