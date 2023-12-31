#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: integer to be raised to power of y
 * @y: raising power of x
 * Return: value of x raised to power of y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
