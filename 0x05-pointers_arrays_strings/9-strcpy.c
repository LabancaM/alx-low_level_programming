#include "main.h"

/**
 * _strcpy - copy string in another variable
 *
 * @dest: char input *dest
 * @src: char input *src
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
