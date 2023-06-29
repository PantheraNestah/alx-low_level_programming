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
	char sep[];

	sep = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j, len = (int)strlen(ch) - 1;

	while (i < len)
	{
		for (j = 0; j < (int)(sizeof(sep) / sizeof(char)); j++)
		{
			if (ch[i] == sep[j])
				ch[i + 1] = toupper(ch[i + 1]);
		}
		i++;
	}
	return (ch);
}
