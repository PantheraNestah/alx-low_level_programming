#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: pointer to string whose characters are printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
