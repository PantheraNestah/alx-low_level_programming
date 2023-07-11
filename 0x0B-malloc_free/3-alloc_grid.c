#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: inner array size
 * @height: outer array size
 * Return: pointer to 2 dimensional array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **darr = (int **)calloc(height, sizeof(int *)), i = 0;

	for (; i < height; i++)
	{
		darr[i] = (int *)calloc(width, sizeof(int));
	}

	if (width <= 0 || height <= 0)
		return (NULL);
	return (darr);
}
