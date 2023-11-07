#include "dog.h"
/**
 * init_dog - initialization of dog
 *
 * @d: dog struct
 * @name: name of dog
 * @owner: owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
