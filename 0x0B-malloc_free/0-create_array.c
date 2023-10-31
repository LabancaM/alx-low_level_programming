#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - full array with caracter
 * @size: size of array
 * @c: caracter to fill
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
