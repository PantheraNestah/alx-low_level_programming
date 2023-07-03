#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates first occurrence of substring
 * @haystack: parent string to such for substring
 * @needle: substring searched for in haystack
 * Return: character pointer to substring
 * and NULL if substring is absent
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
