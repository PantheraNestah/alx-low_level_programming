#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if c is a digit
 * @c: integer argument passed to function _isdigit
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int rValue = isdigit(c);

	if (rValue)
		return (1);
	else
		return (0);
}
