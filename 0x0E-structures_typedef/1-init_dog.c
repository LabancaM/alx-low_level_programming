#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialization of dog
 *
 * @d: dog struct
 * @name: name of dog
 * @owner: owner of dog
 * @age: age
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
