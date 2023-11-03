#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * calloc - check calloc
 * @nmenb: integer
 * @size: integer
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = calloc(nmenb, size);
	if (s == NULL)
		return (NULL);
	return (s);
}
