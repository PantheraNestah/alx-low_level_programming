#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * intCheck - checks for valid input
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int intCheck(int argc, char **argv)
{
	int i = 1, j = 0;

	for (i = 1; i < argc; i++)
		for (j = 0; *argv[i] != '\0' && j < (int) strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of cents.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	unsigned int cents;
	int coins;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (intCheck(argc, argv) == 0)
		{
			cents = atoi(argv[1]);
			for ( ; cents >= 25; coins++, cents -= 25)
				;
			for ( ; cents >= 10; coins++, cents -= 10)
				;
			for ( ; cents >= 5; coins++, cents -= 5)
				;
			for ( ; cents >= 2; coins++, cents -= 2)
				;
			for ( ; cents >= 1; coins++, cents--)
				;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
	return (0);
}
