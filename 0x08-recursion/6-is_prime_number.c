#include "main.h"
/**
 * prime_check - checks recursively input integer from is_prime_number
 * @b: integer parameter to help in checking
 * @n: input integer to be checked if is a prime number or not
 * Return: 1 if input integer is prime number, 0 otherwise
 */
int prime_check(int n, int b)
{
	if (b % n == 0 || b < 2)
		return (0);
	else if (n == b - 1)
		return (1);
	else if (b > n)
		return (prime_check(n + 1, b));
	return (1);
}
/**
 * is_prime_number - checks if the number is a prime number
 * @n: number to be checked if is prime
 * Return: 1 if n is a prime numberk, else 0
 */
int is_prime_number(int n)
{
	return (prime_check(2, n));
}
