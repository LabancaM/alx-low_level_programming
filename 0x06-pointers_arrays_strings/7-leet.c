#include "main.h"

/**
 * leet - mapping stings
 *
 * @s: source input
 * Return: mozart string
 */
char *leet(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
		i++;
	for (l = 0; l < i; l++)
	{
		if (s[l] == 'a' || s[l] == 'A')
			s[l] = '4';
		else if (s[l] == 'e' || s[l] == 'E')
			s[l] = '3';
		else if (s[l] == 'o' || s[l] == 'O')
			s[l] = '0';
		else if (s[l] == 't' || s[l] == 'T')
			s[l] = '7';
		else if (s[l] == 'l' || s[l] == 'L')
			s[l] = '1';
	}
	return (s);
}
