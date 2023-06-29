#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer argument to character
 * @s2: pointer argument to character
 * Return: an integer depending with comparison
 */
int _strcmp(char *s1, char *s2)
{
	int val;

	val = strcmp(s1, s2);
	return (val);
}
