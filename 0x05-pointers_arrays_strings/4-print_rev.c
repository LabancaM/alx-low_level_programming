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
	while (len - 1  >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
