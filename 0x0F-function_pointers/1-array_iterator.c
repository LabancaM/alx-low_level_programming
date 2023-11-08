#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print name
 *
 * @array: array of interger
 * @size: size of array
 * @action: 
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
