#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("NIL\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("NIL\n");
	if (d->owner == NULL)
		printf("NIL\n");
	else
		printf("Owner: %s\n", d->owner);
}
