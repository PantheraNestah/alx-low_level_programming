#include <stdio.h>
/**
 * main - entry point
 * @argc: number of comand line arguments - 1
 * @argv: array of comand line arguments
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
