#include "variadic_functions.h"

/**
 * print_strings - prints a variable number of strings
 * with a separator
 * @separator: separates the printed strings
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list pr;

	va_start(pr, n);

	for (; i < n; i++)
	{
		str = va_arg(pr, char *);
		if (i == (n - 1) || separator == NULL)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s%s", str, separator);
		}
	}
	va_end(pr);
	printf("\n");
}
