#include "main.h"
/**
 * more_numbers - prints numbers 10 times from 0 to 14
 * _putchar - prints character
 * print_number - prints integer n
 * @n - integer argument passed to print_number
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		while (j <= 14)
		{
			print_number(j);
			j++;
		}
		_putchar('\n');
	}
}
