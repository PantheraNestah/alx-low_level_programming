#include "main.h"
#include <string.h>
/**
 * puts_half - prints second half of a string
 * @str: pointer to string to be printed
 */
void puts_half(char *str)
{
	int len = (int)strlen(str), midpoint, i;

	if ((len % 2) == 0)
		midpoint = len / 2;
	else
		midpoint = (len - 1) / 2;
	i = midpoint;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
