#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
        free(d);
}
