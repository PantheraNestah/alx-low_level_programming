#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* the variable i is not incremented therefore i is always 0 which is
* less than 10 hence loop runs infinitely
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
