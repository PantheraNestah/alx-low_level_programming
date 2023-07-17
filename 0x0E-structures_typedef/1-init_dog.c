#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable of type dog
 * @name: string name of dog
 * @age: the age of dog
 * @owner: string name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
