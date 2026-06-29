#include <stdio.h>
#include <conio.h>

void main()
{
    int num, no, rem, arm, i;

    clrscr();

    printf("Enter the range: ");
    scanf("%d", &num);

    printf("Armstrong numbers are:\n");

    for(i = 1; i <= num; i++)
    {
        no = i;
        arm = 0;

        while(no > 0)
        {
            rem = no % 10;
            arm = arm + (rem * rem * rem);
            no = no / 10;
        }

        if(i == arm)
        {
            printf("%d\n", i);
        }
    }

    getch();
}