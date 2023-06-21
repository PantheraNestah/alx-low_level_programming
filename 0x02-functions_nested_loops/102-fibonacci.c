#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main()
{
	int count = 50;
	unsigned long long fib1 = 1, fib2 = 2;
	
	printf("%llu, %llu", fib1, fib2);
	for (int i = 3; i <= count; i++) {
		unsigned long long fib = fib1 + fib2;
		printf(", %llu", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");
	return (0);
}
