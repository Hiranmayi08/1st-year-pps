#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Finding maximum
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    // Finding minimum
    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    // Output the results
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
