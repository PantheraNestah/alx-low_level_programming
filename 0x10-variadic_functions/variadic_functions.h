#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct validTypes - stores type and corresponding function pointer
 * @valid: character pointer member to valid type
 * @f: function pointer member to corresponding function
 */

typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

#endif
