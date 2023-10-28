#include "main.h"

/**
 * _strncpy - copy string to other stings
 *
 * @dest: destination input
 * @src: source input
 * @n: n copy caracter
 * Return: copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, l;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (n > j)
		n = j;
	else if (n == 0 || i == 0)
		return (dest);
	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
