#include "main.h"

/**
 * rev_string - reverse of string
 *
 * @s: char input *s
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, i;
	char svg;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		svg = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = svg;
	}
}
