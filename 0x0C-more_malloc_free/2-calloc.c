#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc
 * and sets memory to 0
 * @nmemb: number of elements of size bytes
 * @size: size in bytes of each element
 * Return: void pointer to allocated memory, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else if (ptr != NULL)
	{
		for (i = 0; i < nmemb; i++)
			ptr[i] = 0;
	}
	return (ptr);
}
