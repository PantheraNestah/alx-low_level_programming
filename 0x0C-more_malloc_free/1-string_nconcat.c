#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings upto n bytes in s2
 * @s1: first string argument
 * @s2: second string argument
 * @n: number of bytes of s2 to concat to s1
 * Return: pointer to newly allocated memory, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int buffer, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int) strlen(s2))
		n = (unsigned int) strlen(s2);
	buffer = (unsigned int) strlen(s1) + n;
	s3 = malloc(sizeof(*s3) * buffer);
	if (s3 != NULL)
	{
		for (i = 0; i <= (unsigned int) strlen(s1); i++)
			s3[i] = s1[i];
		i = i - 1;
		for (j = 0; j < n; i++, j++)
			s3[i] = s2[j];
		s3[i] = '\0';
	}
	return (s3);
}
