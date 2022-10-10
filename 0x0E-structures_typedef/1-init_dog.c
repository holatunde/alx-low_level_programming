#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable to type struct dog
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		;
	}
}
