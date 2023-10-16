#include "main.h"

/**
 * print_rev - print string reverse
 *
 * @s: char input *s
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
