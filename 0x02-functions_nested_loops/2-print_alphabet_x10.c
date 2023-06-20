#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while(i <= 10)
	{
		char alph = 'a';
		while(alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
