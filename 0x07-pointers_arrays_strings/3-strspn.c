#include "main.h"
#include <string.h>
/**
 * _strspn - returns number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: character pointer to string t be chenked
 * @accept: bytes to search in s
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
