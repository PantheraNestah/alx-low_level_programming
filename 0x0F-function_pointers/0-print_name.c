#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints name
 * @name: pointer to name to print
 * @f: pointer to function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
