#include <stdio.h>
int main()
{
    int num,rows,i;
    printf("enter a munber:");
    scanf("%d", &num);
    printf("enter the number of rows:");
    scanf("%d", &rows);
    printf("in multiplication table for %d:\n", num);
    for (i=1;1<=rows;i++)
    {
        printf("%d x %d =%d\n", num,i,num*i);
    }
    return 0;
}
