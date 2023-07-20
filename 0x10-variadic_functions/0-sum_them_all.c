#include "variadic_functions.h"

/**
 * sum_them_all - sums integer arguments
 * @n: number of integer arguments passed to function
 * Return: sum of all the integer arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum;
	va_list pr;

	if (n == 0)
		return (0);
	va_start(pr, (int)n);

	sum = 0;
	for (; i < n; i++)
	{
		sum += va_arg(pr, int);
	}
	va_end(pr);
	return (sum);
}
