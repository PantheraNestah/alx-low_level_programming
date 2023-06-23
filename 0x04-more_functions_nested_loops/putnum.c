#include "main.h"
void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    /**
     * if (n >= 10)
     * _putchar((n / 10) + '0');
     */
    if (n >= 100)
    {
	    _putchar((n / 100) + '0');
	    _putchar((n / 10) % 10 + '0');
    }
    if (n >= 10)
    {
	    _putchar((n / 100) + '0');
	    _putchar((n / 10) % 10 + '0');
    }
    _putchar((n % 10) + '0');
}
int main(void)
{
	print_number(90);
	_putchar('\n');
	print_number(4);
	_putchar('\n');
	print_number(11);
	_putchar('\n');
	print_number(-3);
	_putchar('\n');
	print_number(-14);
	_putchar('\n');
	print_number(-60);
	_putchar('\n');
	_putchar(402);
	_putchar('\n');
	_putchar(1024);
}
