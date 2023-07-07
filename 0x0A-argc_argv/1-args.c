#include <stdio.h>
/**
 * main - entry point
 * @argc: number of comand line arguments - 1
 * @argv: array of comand line arguments
 * Return: 0(success)
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
