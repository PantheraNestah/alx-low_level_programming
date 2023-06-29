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
	int len = strlen(str) - 1, i = 0;

	while (i < len)
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
