#include "main.h"

/**
 * _strlen - compute the length of string
 *
 * @s: char input *s
 * return: length of input string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
