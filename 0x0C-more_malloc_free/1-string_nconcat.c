#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate
 * @s1: string
 * @s2: string
 * @n: int
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, size;
	char *str;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	if (n > j)
		n = j;
	size = i + n;
	str = malloc(sizeof(char) * (size +1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = i; k < size; k++)
		str[k] = s2[k-i];
	str[size] = '\0';
	return (str);
}
