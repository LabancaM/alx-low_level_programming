#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - arrange integer
 * @min: integer
 * @max: integer
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a, i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		ptr = calloc;
	}
	return (ptr);
}
