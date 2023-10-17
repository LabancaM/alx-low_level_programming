#include "main.h"

/**
 * _atoi - convert string into number
 *
 * @s: char input *s
 * Return: number  in string
 */
int _atoi(char *s)
{
	int len = 0, digit, n = 0, cpt = 0;
	int stop = 0;

	while (s[len] != '\0' && stop == 0)
	{
		if (s[len] == '-')
			cpt++;
		if (s[len] >= '0' && s[len] <= '9')
		{
			digit = s[len] - '0';
			n = n * 10 + digit;
			if (s[len + 1] < '0' || s[len + 1] > '9')
			{
				n += 0;
				stop = 1;
				break;
			}
		}
		len++;
	}
	if (cpt % 2 && n != 0)
		n = -n;
	return (n);
}
