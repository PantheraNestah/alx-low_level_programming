#include "main.h"
/**
 * print_number - prints a number passed as argument
 * _putchar - prints character
 * @n: integer argument passed to print_number function
 */
void print_number(int n)
{
	unsigned int i= n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if ( i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
