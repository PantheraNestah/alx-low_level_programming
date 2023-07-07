#include <stdio.h>
/**
 * main - entry point
 * @argc: number of comand line arguments - 1
 * @argv: array of comand line arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
