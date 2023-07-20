#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of integers
 * with a seperator
 * @separator: seperator for the integers printed
 * @n: number of integer arguments passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num = 0;
	va_list pr;

	va_start(pr, n);

	for (; i < n; i++)
	{
		num = va_arg(pr, unsigned int);

		if (separator == NULL || i == (n - 1))
		{
			printf("%d", num);
		}
		else
			printf("%d%s", num, separator);
	}
	va_end(pr);
	printf("\n");
}
