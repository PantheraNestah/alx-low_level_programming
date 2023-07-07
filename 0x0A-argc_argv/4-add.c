#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * testInt - tests if comand line argument is a digit
 * @iptr: integer argument size of character array
 * @cptr: pointer to character pointer
 * Return: true on success, false on failure
 */
int testInt(int iptr, char **cptr)
{
	int i = 1, j;

	for (; i < (iptr - 1); i++)
	{
		for (j = 0; *cptr[i] != '\0' && j < (int) strlen(cptr[i]); j++)
		{
			if (isdigit(cptr[i][j]) == 0)
				return (1);
		}
	}
	return (0);
}
/**
 * main - entry point
 * @argc: number of comand line arguments - 1
 * @argv: array of comand line arguments
 * Return: 0(success), 1 on Error
 */
int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	if (testInt(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (; count < argc; count++)
		sum += atoi(argv[count]);
	printf("%d\n", sum);
	return (0);
}
