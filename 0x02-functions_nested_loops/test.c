#include <unistd.h>

int _putchar(char c);

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

int main()
{
    for (int i = 1; i <= 50; i++) {
        print_number(i);
        _putchar('\n');
    }

    return 0;
}
