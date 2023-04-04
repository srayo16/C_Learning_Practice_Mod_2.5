// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
// See the sample input and output for more clarification.
#include <stdio.h>

int main()
{
    int a;
    printf("Please give non-negative number: ");
    scanf("%d", &a);
    if (a >= 0)
    {
        if (a % 2 != 0)
        {
            printf("Odd");
        }
        else if (a % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Something is wrong!");
        }
    }
    else
    {
        printf("Input is negative!");
    }
    return 0;
}