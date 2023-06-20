#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if argument is lowercase alphabet
 * Return: 1 if argument is lowercase, 0 if argument is uppercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
