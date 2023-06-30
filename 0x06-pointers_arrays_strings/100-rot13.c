#include "main.h"
/**
 * rot13 - encodes a string by the rot13 encoding
 * @str: string argument to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;

	char alphA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphB[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphA[j] != '\0'; j++)
		{
			if (str[i] == alphA[j])
			{
				str[i] = alphB[j];
				break;
			}
		}
	}
	return (str);
}
