// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    float div = a * 1.0 / b * 1.0;

    // printf("%d %d %d %0.2f", sum, sub, multi, div);
    printf("\n%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%0.2f", a, b, sum, a, b, sub, a, b, multi, a, b, div);

    return 0;
}