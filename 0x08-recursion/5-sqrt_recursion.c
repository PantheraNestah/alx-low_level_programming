#include "main.h"
/**
 * sqrt_func - check input integer from n to b
 * @n: number input which is squared and compared against b
 * @b: base number to check
 * Return: natural square root of number b
 */
int sqrt_func(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (sqrt_func(n + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to find square root
 * Return: natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_func(1, n));
}
