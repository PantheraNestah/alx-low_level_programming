#include "main.h"
#include <string.h>
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to string to be printed to the stdout
 */
void _puts(char *str)
{
	int i = 0;

	while (i < (int)strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
