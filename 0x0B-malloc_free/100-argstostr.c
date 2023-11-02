#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: destination string
 * @s2: source string
 *
 * Return: string
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
