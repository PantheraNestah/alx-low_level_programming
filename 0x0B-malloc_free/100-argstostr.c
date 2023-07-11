#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of programme arguments
 * @av: array of programme arguments
 * Return: character pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, idx = 0, len;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		len += strlen(av[i]);
		len += 1;
	}
	i = 0;
	arr = (char *)malloc(len * sizeof(char));
	for (; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			arr[idx] = av[i][j];
			j++;
			idx++;
		}
		arr[idx] = '\n';
		idx++;
	}
	if (arr != NULL)
		return (arr);
	return (NULL);
}
