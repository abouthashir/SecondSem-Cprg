#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 0, b = 1, fib, i, n;

    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    printf("%d\n", a);

    for(i = 1; i < n; i++)
    {
        fib = a + b;
        a = b;
        b = fib;

        printf("%d\n", fib);
    }

    getch();
}