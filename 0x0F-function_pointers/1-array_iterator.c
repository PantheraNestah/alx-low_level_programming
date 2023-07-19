#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function on each array element
 * @array: array of elements on which to execute action
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
		for (; i < (int) size; i++)
		{
			(*action)(*(array + i));
		}
}
