#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: stores value for name member of dog_t type
 * @age: stores value for age member of dog_t type
 * @owner: stores value for owner member of dog_t type
 * Return: return address of variable of dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2, i;

	len1 = len2 = 0;
	while (name[len1++])
		;
	while (owner[len2++])
		;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(len1 * sizeof(d->name));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(len2 * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < len2; i++)
		d->owner[i] = owner[i];
	return (d);
}
