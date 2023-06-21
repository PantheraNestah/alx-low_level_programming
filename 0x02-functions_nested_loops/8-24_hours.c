#include "main.h"
#include <unistd.h>
/**
 * print_number - converts integer to character and prints it out
 * jack_bauer - prints every minute of the day of Jack Bauer from 00:00 to 23:59
 * @n: integer argument passed to print_number function
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
void jack_bauer(void)
{
	int minute = 0;
	int sec;

	while (minute <= 23)
	{
		sec = 0;
		while (sec <= 59)
		{
			if (minute <= 9)
			{
				_putchar('0');
				print_number(minute);
				_putchar(':');
			}
			else
			{
				print_number(minute);
				_putchar(':');
			}
			if (sec <= 9)
			{
				_putchar('0');
				print_number(sec);
			}
			else
				print_number(sec);
			sec++;
			_putchar('\n');
		}
		minute++;
	}
}
