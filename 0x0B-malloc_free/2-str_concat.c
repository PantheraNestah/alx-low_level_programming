#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * Return: character pointer on success, NULL on frailure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1), len2 = strlen(s2);
	int len3 = len1 + len2, i = 0;
	char *arr = (char *)malloc(len3 * sizeof(char));

	for (; i <= len1; i++)
	{
		arr[i] = s1[i];
	}
	i = i - 1;
	len1 = 0;
	for (; len1 < len2; len1++, i++)
	{
		arr[i] = s2[len1];
	}
	if (arr != NULL)
		return (arr);
	return (NULL);
}
