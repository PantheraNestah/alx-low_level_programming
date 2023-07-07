#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * testInt - tests if comand line argument is a digit
 * @iptr: integer argument size of character array
 * @cptr: pointer to character pointer
 * Return: true on success, false on failure
 */
int testInt(int iptr, char **cptr)
{
	int i = 1, state;

	while (i++ < iptr)
	{
		if (isdigit(cptr[i]))
		{
			printf("%d is a digit\n", atoi(cptr[i]));
			state = 1;
		}
		else
		{
			printf("%d is not a digit...\nBreaking...!\n", atoi(cptr[i]));
			state = 0;
			break;
		}
	}
	return (state);
}
int main(int argc, char **argv)
{
	int j = argc;
	char **ch = argv;
	testInt(j, ch);
	return (0);
}
