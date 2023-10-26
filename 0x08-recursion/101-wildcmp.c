#include "main.h"

int str_length(char *s)
{
	int n = 0;
	if (*s != '\0')
	{
		n += 1;
		return (n + str_length(++s));
	}
	return (n);
}
int palindrome(char *s, int n, int k)
{
	if (s[k] != s[n-k-1])
		return 0;
	if (k == n / 2)
		return 1;
	return (palindrome(s, n, ++k));
}
/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: input string
 * Return: 1 if is palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int n = str_length(s);
	if (n == 0)
		return 0;
	return (palindrome(s, n, 0));
}
