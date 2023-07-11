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
	int i = 0, len = strlen(str);
	char *arr = (char *)malloc(len * sizeof(char));

	for (; i <= len; i++)
	{
		arr[i] = str[i];
	}
	if (arr != NULL)
		return (arr);
	return (NULL);
}
