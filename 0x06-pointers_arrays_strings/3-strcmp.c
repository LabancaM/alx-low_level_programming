#include "main.h"

/**
 * _strcmp - compare two stings
 *
 * @s1: destination input
 * @s2: source input
 * Return: number of soustraction
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k, l;
	int sum = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		k = j;
	else
		k = i;
	for (l = 0; l < k; l++)
	{
		sum += (s1[l] - s2[l]);
	}
	return (sum);
}
