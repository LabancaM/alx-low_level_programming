#include "main.h"
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		print("NIL\n");
	else
		print("Name: %s", d->name);
	if (d->age == NULL)
		print("NIL\n");
	else
		print("Name: %s", d->name);
	if (d->name == NULL)
		print("NIL\n");
	else
		print("Name: %s", d->name);
}
