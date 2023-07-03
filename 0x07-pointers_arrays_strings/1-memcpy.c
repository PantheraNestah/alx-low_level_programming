#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 * @dest: destination memory area to copy to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: character pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
