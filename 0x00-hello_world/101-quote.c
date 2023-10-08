#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sizephrase;
	char phrase[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	sizephrase = sizeof(phrase) / sizeof(phrase[0]);
	for (i = 0; i < sizephrase; i++)
	{
		putchar(phrase[i]);
	}
	putchar('\n');
	return (1);
}
