#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to characer
 * Return: character pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
