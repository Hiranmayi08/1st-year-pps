#include <stdio.h>
int main()
{
    int arr[10],max , min,size,i;
    printf("enter the size of an array[<10]:");
    scanf("%d", &size);
    printf("enter the elements of an array:");
    for(i=0;i<size;i++)
    { 
        scanf("%d", arr[i]);
        min=max=arr[0];
    }
    for (i=1;i<size;i++)
    {
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];
    }
    printf("\n maximum is : %d", max);
    printf("\n minimun is : %d", min);
    return 0;
}