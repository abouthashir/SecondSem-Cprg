#include <stdio.h>
#include <conio.h>

void main()
{
    int num, rev = 0, sum = 0, d;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        d = num % 10;
        sum = sum + d;
        rev = rev * 10 + d;
        num = num / 10;
    }

    printf("\nSum of digits = %d", sum);
    printf("\nReverse of the number = %d", rev);

    getch();
}