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
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	
	a = calloc(max - min + 1, sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i - min] = i;
	return (a);
}
