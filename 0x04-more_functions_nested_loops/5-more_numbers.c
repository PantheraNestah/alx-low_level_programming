#include "main.h"
/**
 * more_numbers - prints numbers 10 times from 0 to 14
 * _putchar - prints character
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
	}
}
