#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if argument c passed is alphabetic
 * Return: 1 if argument c is alphabetic, 0 if argument c is numeric
 * @c: integer argument passed to the function _isalpha
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
