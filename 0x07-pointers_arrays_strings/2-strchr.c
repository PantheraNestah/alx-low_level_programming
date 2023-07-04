#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: character pointer to string to locate character
 * @c: character to be located in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
			break;
		}
		i++;
	}
	return (NULL);
}
