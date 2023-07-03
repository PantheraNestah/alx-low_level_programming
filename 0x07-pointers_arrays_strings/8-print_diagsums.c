#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the calculated sum of the two diagonals of a
 * ssquare matrix of integer items
 * @a: argument which is square matrix
 * @size: size of matrix)
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	unsigned int sum1 = 0, sum2 = 0;

	for ( ; row < size; row++)
	{
		sum1 += a[(size * row) + row];
		sum2 += a[(size * (row + 1)) - (row + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
