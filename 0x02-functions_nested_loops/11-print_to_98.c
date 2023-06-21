#include "main.h"
/**
 * print_to_98 - prints integers from n to 98
 * print_number - converts integer to character and prints it
 * @num: integer argument passed to print_number function
 * @n: integer argument passed to print_to_98 function
 */
void print_number(int num)
{
	if (num < 0) {
		_putchar('-');
		num = -num;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar('0' + num % 10);
}
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
