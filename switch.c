#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("enter two numbers:");
    scanf("%d %d", &a,&b);
    printf("\n choose an operation:\n");
    printf("1. addition\n");
printf("2. substraction\n");
printf("3. multiplication\n");
printf("4. division\n");
printf("enter your choice:");
switch (choice)
{
    case 1:
    printf("result=%d\n", a+b);
    break;
    case 2:
    printf("result=%d\n", a-b);
    break;
    case 3:
    printf("result=%d\n", a*b);
    break;
    case 4:
    printf("result=%d\n", a/b);
    break;
    printf("Error: Division by zero not allowed.\n");
    break;
    default:
    printf("invalid choice.\n");
}
return 0;
}
