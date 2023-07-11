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
	int len1, len2;
	int len3, i = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	len3 = len1 + len2 + 1;
	arr = (char *)malloc(len3 * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (; i < len3; i++)
		i < len1 ? (arr[i] = s1[i]) : (arr[i] = s2[i - len1]);
	return (arr);
}
