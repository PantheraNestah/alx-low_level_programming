#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to store char address
 * @to: character pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
