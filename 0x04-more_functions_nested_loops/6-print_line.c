#include "main.h"
/**
 * print_line - prints character _ n times
 * @n: number of times the character _ is printed
 * _putchar - prints character
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
