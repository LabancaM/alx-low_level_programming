#include "main.h"

/**
 * _strncat - concatenate two stings at n position
 *
 * @dest: destination input
 * @src: source input
 * @n: position n
 * Return: concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k, l;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (n > i)
		n = i;
	for (l = j, k = 0; l < n + j; l++, k++)
	{
		dest[l] = src[k];
	}
	dest[l] =  '\0';
	return (dest);
}
