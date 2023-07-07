#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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
			state = 1;
		}
		else
		{
			state = 0;
			break;
		}
	}
	return (state);
}
/**
 * main - entry point
 * @argc: number of comand line arguments - 1
 * @argv: array of comand line arguments
 * Return: 0(success), 1 on Error
 */
int main(int argc, char **argv)
{
	int count = 1, sum;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (testInt(argc, argv))
	{
		while (count++ < (argc - 1))
		{
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	else if(!testInt(argc, argv))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
