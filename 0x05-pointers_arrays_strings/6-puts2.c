#include "main.h"

/**
 * puts2- print caracter of string
 *
 * @str: char input *str
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2)
		{
			len++;
			continue;
		}
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
