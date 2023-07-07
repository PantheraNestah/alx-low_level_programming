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
	int opr1, opr2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		opr1 = atoi(argv[1]);
		opr2 = atoi(argv[2]);
		printf("%d\n", opr1 * opr2);
	}
	return (0);


}
