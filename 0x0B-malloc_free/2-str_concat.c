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
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, size;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		j=0;
	else
	{
		while (s2[j] != '\0')
		j++;
	}
	size = i + j;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = i; k < size; k++)
		str[k] = s2[k - i];
	return (str);
}
