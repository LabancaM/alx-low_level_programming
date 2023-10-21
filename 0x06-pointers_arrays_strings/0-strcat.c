#include "main.h"

/**
 * _strcat - concatenate two stings
 *
 * @dest: destination input
 * @src: source input
 * Return: concatenate string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, l;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	for (l = j, k = 0; l < i + j; l++, k++)
	{
		dest[l] = src[k];
	}
	dest[l] =  '\0';
	return (dest);
}
