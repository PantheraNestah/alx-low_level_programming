#include "main.h"
#include <stdio.h>
/**
 * print_array - prints integers in an array
 * @a: pointer to first element in the array
 * @n: number of elements in the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
