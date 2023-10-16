#include "main.h"

/**
 * _puts - print string
 *
 * @str: char input *str
 * Return: nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
