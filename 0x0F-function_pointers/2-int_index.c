#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - print name
 *
 * @array: array of interger
 * @size: size of array
 * @cmp: pointer function
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
