#include "main.h"
#include <string.h>
/**
 * print_rev - prints string pointed to by s in reverse
 * @s: pointer to string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = (int)strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
