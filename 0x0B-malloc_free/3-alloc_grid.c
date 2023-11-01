#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - build grid
 * @width: width of grid
 * @height: heigth of grid
 *
 * Return: integer array of array
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(tab + i) = malloc(sizeof(int) * width);
		if (*(tab + i) == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(tab[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
