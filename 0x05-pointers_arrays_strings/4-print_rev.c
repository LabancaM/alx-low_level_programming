#include "main.h"

/**
 * print_rev - print string reverse
 *
 * @s: char input *s
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
