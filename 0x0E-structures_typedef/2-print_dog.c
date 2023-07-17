#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dog - prints the members of struct dog
 * @d: pointer to variable of type dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
