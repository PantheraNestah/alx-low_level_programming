#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings depending on n value
 * @dest: string destination for concatenation
 * @src: string source for concatenation
 * @n: maximum number of bytes in src to be concatenated to dest
 * Return: character pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = (int)strlen(dest), i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[destLen] = src[i];
		i++;
		destLen++;
	}
	if (dest[destLen - 1] == '\0')
	{
		*dest = *(dest + (destLen - 2));
	}
	return (dest);
}
