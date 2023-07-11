#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: character pointer to string to split
 * Return: pointer to character pointer of strings array
 */
char **strtow(char *str)
{
	int i = 0, j, k = 0, snum = 0, wlen = 0;
	char **arr;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			snum++;
		}
		i++;
	}
	arr = (char **)malloc(snum * sizeof(char *));
	i = 0;
	for (; i < snum; i++)
	{
		while (str[k] != ' ')
			wlen++;
		arr[i] = (char *)malloc(wlen * sizeof(char));
		j = 0;
		while (j < wlen)
		{
			arr[i][j] = str[k];
			k++;
			j++;
		}
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	if (arr != NULL)
		return (arr);
	return (NULL);
}
