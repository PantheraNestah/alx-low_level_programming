#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: character pointer of string to be searched
 * @accept: character pointer to the string whose bytes are to
 * be searched
 * Return: character pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	char *found;

	while (s[j] != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == s[j])
			{
				found = &s[j];
				return (found);
			}
			i++;
		}
		j++;
	}
	return (NULL);
}
