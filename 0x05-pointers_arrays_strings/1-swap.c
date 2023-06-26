#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer argument
 * @b: second integer argument
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
