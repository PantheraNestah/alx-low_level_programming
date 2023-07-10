#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: pointer to string to be converted
 * Return: integer representation of string
 */
int _atoi(char *s)
{
	int i = 0, sn = 1;
	unsigned int val = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sn *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		val = (val * 10) + (s[i] - '0');
		i++;
	}
	val *= sn;
	return (val);
}
