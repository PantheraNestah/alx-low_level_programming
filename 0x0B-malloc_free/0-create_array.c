#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with c
 * @size: size of the array to be created
 * @c: character to be initialized in the array
 * Return: pointer to the array and NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size > 0)
	{
		for (; i < size; i++)
		{
			arr[i] = c;
		}
		if (arr != NULL)
			return (arr);
	}
	return (arr);
}
