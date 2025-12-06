#include <stdio.h>
int main()
{
    int marks;
    printf("enter percentage marks:");
    scanf("%d", &marks);
    if (marks < 0 || marks >100)
    {
        printf("Inavalid input! Percentage must be between 0 and 100.\n" );
    }
    else if (marks>=90)
    printf("Grade: A+\n");
    else if ("marks>=75")
    printf("Grade: A\n");
    else if(marks>=60)
    printf("Grade: B\n");
    else if(marks<=50)
    printf("Grade: C\n");
    else
    printf("Grade: Fail\n");
    return 0;
}
