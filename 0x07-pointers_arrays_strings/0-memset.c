#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to
 * by s with constant byte b
 * @s: pointer to memory area to be filled with byte b
 * @b: constant byte to be filled at memory pointed to by s
 * @n: number bytes to be filled
 * Return: character pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
