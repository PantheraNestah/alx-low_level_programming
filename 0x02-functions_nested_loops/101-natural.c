#include "main.h"
/**
 * main - Entry point
 * print_number - converts integer to character and prints it out
 * @n: integer argument passed to print_number function
 * Return: Always 0(Success)
 */
void print_number(int n)
{
	if (n < 0) {
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
int main(void)
{
	int sum = 0;
	int i;

    	for (i = 1; i < 1024; i++)
	{
        	if (i % 3 == 0 || i % 5 == 0)
		{
            		sum += i;
		}
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}
