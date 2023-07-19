#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns index
 * @array: integer array to search in
 * @size: size of integer array to search in
 * @cmp: pointer to function for comparisson
 * Return: integer index of found integer in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
