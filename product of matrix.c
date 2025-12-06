#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10];
    int r1,c1,r2,c2,i,j,k;
    printf("enter number of rows and coloumns of first matrix:");
    scanf("%d%d", &r1,&c1);
    printf("enter the number of rows and colomns of second matrix:");
    scanf("%d%d", &r2,&c2);
    if (c1!=r2)
    {
        printf("matrix multiplication not possible!\n");
        return 0;
    }
    printf("enter the elements of first matrix\n");
    for(i=0;i<ri++)
    {
        for (j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

}
printf("enter elements of second matrix:\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        scanf("%d";&b[i][j]);
    }
}
printf("product of matrices:\n");
for (i=0;i<r1;i++)
{
    for (j=0;j<c2;j++)
    {
        mul[i][j]=0;
        for (k=0;k<c1;k++)
        {
            mul[i][j]=mul[i][j]+(a[i][j]*b[k][j]);
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j,c2;j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    returm 0;
}