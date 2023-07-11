#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - returns pointer to copy of string given
 * @str: string argument given
 * Return: character pointer on success, NULL if str is NULL, NULL failure
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	arr = (char *)malloc(len * sizeof(char));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (; i < len; i++)
		arr[i] = str[i];
	arr[i] = '\0';
	return (arr);
}
