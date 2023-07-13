#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum array value
 * @max: maximum array value
 * Return: pointer to newly allocated memory, NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr, i, len = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len && min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
