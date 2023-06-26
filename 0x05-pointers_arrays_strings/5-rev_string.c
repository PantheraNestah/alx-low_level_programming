#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 */
void rev_string(char *s)
{
	int len = (int)strlen(s) - 1;
	char *reversed = malloc((len) * sizeof(char));
	int i = 0;

	while (len >= 0)
	{
		reversed[i] = s[len];
		len--;
		i++;
	}
	len = len + 1;
	while (len < (int)strlen(reversed))
	{
		s[len] = reversed[len];
		len++;
	}
}
