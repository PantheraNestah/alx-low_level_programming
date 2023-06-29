#include "main.h"
#include <string.h>
/**
 * _strncpy - copies at most n bytes of src to dest string
 * @dest: destination string for copying
 * @src: source string for copying
 * @n: maximum number of bytes to be copied
 * Return: dest(pointer to destination string after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
