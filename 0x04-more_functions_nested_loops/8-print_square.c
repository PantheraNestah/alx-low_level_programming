#include "main.h"
/**
 * print_square - prints a square using the # character
 * @size: size of the square to be printed
 * _putchar - prints character
 */
void print_square(int size)
{
	int i = 1;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
