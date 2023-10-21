#include "main.h"

/**
 * string_toupper - string to upper case 
 *
 * @s: source input
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
		i++;
	for (l = 0; l < i; l++)
	{
		s[l] = s[l] - 32;
	}
	return (s);
}
