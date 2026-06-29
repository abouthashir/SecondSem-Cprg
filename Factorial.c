#include <stdio.h>
#include <conio.h>

long int fact(int n);

void main()
{
    int n;

    clrscr();

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d = %ld", n, fact(n));

    getch();
}

long int fact(int n)
{
    if(n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}