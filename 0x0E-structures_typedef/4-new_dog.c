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
	char *tempName, *tempOwner;
	dog_t *d = malloc(1 * sizeof(*d));

	tempName = name;
	tempOwner = owner;
	d->name = tempName;
	d->age = age;
	d->owner = tempOwner;

	if (d != NULL)
		return (d);
	return (NULL);
}
