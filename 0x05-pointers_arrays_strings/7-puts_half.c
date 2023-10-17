#include "main.h"

/**
 * puts_half - print last half  of string
 *
 * @str: char input *str
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	if (len % 2)
		i = len / 2 + 1;
	else
		i = len /2;
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
