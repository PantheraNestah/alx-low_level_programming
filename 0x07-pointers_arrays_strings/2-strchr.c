#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: character pointer to string to locate character
 * @c: character to be located in the string
 */
char *_strchr(char *s, char c)
{
	char *found;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = &s[i];
			break;
		}
		i++;
	}
	return (found);
}
