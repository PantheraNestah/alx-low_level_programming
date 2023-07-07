#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of comand line arguments
 * @argv: array of comand line arguments
 * Return: 0(success) 1 if argc < 2
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		long int prod = (atol(argv[1])) * atol(argv[2]);

		printf("%ld\n", prod);
	}
	return (0);


}
