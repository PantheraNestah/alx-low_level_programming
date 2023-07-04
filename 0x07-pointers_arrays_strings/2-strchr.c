#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: character pointer to string to locate character
 * @c: character to be located in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0, a;

	while (1)
	{
		a = s[i++];
		if (a == c)
		{
			return (&s[i] - 1);
		}
		else if (a == 0)
			return (NULL);
	}
}
