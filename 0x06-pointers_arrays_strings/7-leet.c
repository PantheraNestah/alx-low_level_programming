#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: character pointer argument
 * Return: character pointer argument
 */
char *leet(char *str)
{
	int i = 0, j, k;
	char orig[] = "oOlLeEaAtT";
	char repArr[] = "0011334477";

	while (str[i] != '\0')
	{
		k = 0;
		j = 0;
		while (orig[j] != '\0')
		{
			if (str[i] == orig[j])
			{
				k = j;
				str[i] = repArr[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
