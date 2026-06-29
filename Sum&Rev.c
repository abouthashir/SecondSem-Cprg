#include <stdio.h>

int main()
{
    int num, rev = 0, sum = 0, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        num = num / 10;
        sum += d;
        rev = rev * 10 + d;
    }

    printf("Sum of the digits = %d", sum);
    printf("\nReverse of the number = %d", rev);

    return 0;
}