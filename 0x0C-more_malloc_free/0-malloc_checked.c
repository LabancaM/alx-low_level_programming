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
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		return ((int *)98);
	}
	return (p);
}
