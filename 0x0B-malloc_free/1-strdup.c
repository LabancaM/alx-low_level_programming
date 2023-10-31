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

	while (str[size] != '\0')
	{
		size++;
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for ( i = 0; i < size; i++)
		s[i] = str[i];
	return (s);
}
