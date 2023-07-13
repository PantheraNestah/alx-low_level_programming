#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to initial memory block
 * @old_size: size of initial memory block
 * @new_size: size of new memory block to be allocated
 * Return: pointer to newly allocated memory, NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p, *old_c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_p = malloc(new_size * sizeof(char));
		old_c = ptr;
		for (i = 0; i < old_size; i++)
		{
			new_p[i] = old_c[i];
		}
		free(ptr);
		return (new_p);
	}
	return (ptr);
}
