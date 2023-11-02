#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check malloc
 * @b: integer
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
