#include "main.h"

/**
 * _strlen_recursion - give length of string
 *
 * @s: source input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n += 1;
		return (n + _strlen_recursion(s + 1));
	}
	return (n);
}
