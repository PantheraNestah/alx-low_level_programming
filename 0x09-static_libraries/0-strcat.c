#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: char pointer to string destination
 * @src: char pointer to string source
 * Return: character pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int srcLen = (int)strlen(src), destLen = (int)strlen(dest) - 1, i = 0;

	dest[destLen] = ' ';
	destLen++;
	while (i <= srcLen)
	{
		dest[destLen] = src[i];
		i++;
		destLen++;
	}
	return (dest);
}
