#include "main.h"

/**
 * wildcmp - do a wild compare for two string
 *
 * @s1: input string
 * @s2: input string
 * Return: 1 if the are the same 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (*(s2 + 1) == '\0')
			return (1);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
