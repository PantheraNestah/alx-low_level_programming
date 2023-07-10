#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if a character is uppercase or lowercase
 * Return: 1 if c is uppercase and 0 otherwise
 * @c: integer argument passed to _isupper function
 */
int _isupper(int c)
{
	int rValue;

	rValue = isupper(c);
	if (rValue)
		return (1);
	else
		return (0);
}
