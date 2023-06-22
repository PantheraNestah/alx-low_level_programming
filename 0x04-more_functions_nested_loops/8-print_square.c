#include "main.h"
/**
 * print_square - prints a square using the # character
 * @size - size of the square to be printed
 * _putchar - prints character
 */
void print_square(int size)
{
	int i = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			int j = 1;
			
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
