#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string to find length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**palind_check - checks palindrome
 * @str: string to check
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 otherwise
 *
 */
int palind_check(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (palind_check(str, len - 1, count + 1));
	return (0);
}
/**is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, o otherwise
 *
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (palind_check(s, len - 1, count));
}
