#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: character pointer to string to find length
 * Return: integer value, length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
		return (0 + _strlen_recursion(++s));
}
