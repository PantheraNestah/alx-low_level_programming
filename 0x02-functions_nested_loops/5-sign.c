#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Return: 1 if n is greater than zero, 0 if n equals zero, -1 if n < 0
 * @n: integer argument passed to the function print_sign to be checked sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
