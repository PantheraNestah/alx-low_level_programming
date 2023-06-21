#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char alph;

	while (i <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		i++;
	}
}
