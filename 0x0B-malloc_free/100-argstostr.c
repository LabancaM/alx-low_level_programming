#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - for display argument
 * @ac: number of argument
 * @av: array of argument
 *
 * Return: arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l;
	int size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	}
	size = k + ac + 1;
	str = malloc(sizeof(char) * size);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[l] = av[i][j];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	str[l] =  '\0';
	return (str);
}
