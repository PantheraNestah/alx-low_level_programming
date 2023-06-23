#include "main.h"
/**
 * print_triangle - prints triangle of size size
 * @size: size of triangle to be printed
 * _putchar - prints character
 */
void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = size;

		while (j > i)
		{
			_putchar(' ');
			j--;
		}
		j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
