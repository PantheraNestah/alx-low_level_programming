#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer array
 * @n: maximum number of integers in array to be reversed
 */
void reverse_array(int *a, int n)
{
	int front = 0, temp, back, mid;

	n--;
	back = n;
	if (n % 2 == 0)
		mid = n / 2;
	else
		mid = (n / 2) + 1;
	while (front < mid || back >= mid)
	{
		temp = a[front];
		a[front] = a[back];
		a[back] = temp;
		front++;
		back--;
	}
}
