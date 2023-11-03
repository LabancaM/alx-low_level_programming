#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check calloc
 * @nmemb: integer
 * @size: integer
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = calloc(nmemb, size);
	if (s == NULL)
		return (NULL);
	return (s);
}
