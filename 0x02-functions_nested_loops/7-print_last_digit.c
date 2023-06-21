#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: integer argument for the function print_last_digit function
 * Return: value of i's last digit
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
