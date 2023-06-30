#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes first letter of all words in a string
 * @ch: argument character pointer
 * Return: character pointer
 */
char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if ((ch[i - 1] == ' ' || ch[i - 1] == '\n'
		|| ch[i - 1] == '\t' || ch[i - 1] == ','
		|| ch[i - 1] == ';' || ch[i - 1] == '!'
		|| ch[i - 1] == '?' || ch[i - 1] == '"'
		|| ch[i - 1] == '(' || ch[i - 1] == ')'
		|| ch[i - 1] == '{' || ch[i - 1] == '}'
		|| ch[i - 1] == '.')
		&& (ch[i] >= 'a' && ch[i] <= 'z'))
		{
			ch[i] = ch[i] - 32;
		}
		else if ((ch[0] >= 97 && ch[0] <= 122))
		{
			ch[0] = ch[0] - 32;
		}
		else
		{
			ch[i] = ch[i];
		}
		i++;
	}
	return (ch);
}
