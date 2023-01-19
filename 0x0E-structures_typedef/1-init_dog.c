#include <stdlib.h>
#include "dog.h"

/**
 * init_dogs - initializes a variable of type struct dog.
 * @d: pointer to structure
 * @name: first member
 * @age: second number
 * @owner: third number
 *
 * Return: void
 */

void init_dogs(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
