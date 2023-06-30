#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer array
 * @n: maximum number of integers in array to be reversed
 */
void reverse_array(int *a, int n)
{
	int front = 0, temp;

	n--;
	while (front < n)
	{
		n--;
		temp = a[front];
		a[front] = a[n];
		a[n] = temp;
		front++;
	}
}
