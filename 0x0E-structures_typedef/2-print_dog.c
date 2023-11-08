#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - print dog
* @d: dog
* Return: nothing
*/
void print_dog(struct dog *d)
{
	float s = 0;

	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %.6f\n", a);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
