#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *marc_dog;
        int i = 0, j = 0, l;

        while (name[i] != '\0')
                i++;
        while (owner[j] != '\0')
                j++;
        marc_dog = malloc(sizeof(dog_t));
        if (marc_dog == NULL)
                return (NULL);
        marc_dog->name = malloc(i * sizeof(char));
        marc_dog->owner = malloc(j * sizeof(char));
        for (l = 0; l < i; l++)
                marc_dog->name[l]= name[l];
        for (l = 0; l < j; l++)
                marc_dog->owner[l] = owner[l];
        marc_dog->age = age;
        if (marc_dog->name == NULL)
                return (NULL);
        if (marc_dog->owner == NULL)
                return (NULL);
        free(marc_dog->owner);
        return (marc_dog);
}
