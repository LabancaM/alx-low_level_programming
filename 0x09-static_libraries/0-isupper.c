#include "main.h"

/**
 * _isupper - check if caracter is upper
 *
 * @c: input integer which is a caracter
 * Return: 1 if is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
