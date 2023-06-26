#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 */
void rev_string(char *s)
{
	int len = (int)strlen(s) - 1, i = 0;
	char front, back;

	while (len > i)
	{
		front = s[i];
		back = s[len];
		s[i] = back;
		s[len] = front;
		len--;
		i++;
	}
}
