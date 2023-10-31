#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - full array with caracter
 * @str: return string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
