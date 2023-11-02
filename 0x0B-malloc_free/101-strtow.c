#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - for display argument
 * @str: input string
 *
 * Return: array of array
 */
char **strtow(char *str)
{
	int i, j = 1, k = 0;
	char **tab;
	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0', i++)
	{
		k ++;
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			j++;
		}
		if (str[i] == ' ' )
		{
			height = k;
			continue;
		}
	}
	tab = malloc(sizeof(char *) * heigth);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i< heigth; i++)
	{
		*(tab + i) = malloc(sizeof(char) * width);
		if (tab[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(tab[j]);
			free(tab);
			return (NULL)
		}
	}

	for (i = 0; i< heigth; i++)
	{
		for (i = 0; i< heigth; i++)
		{
			tab[i][j]= str[k];
		}
	}
	return (tab);
}
