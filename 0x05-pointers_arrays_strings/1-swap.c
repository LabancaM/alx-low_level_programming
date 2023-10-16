#include "main.h"

/**
 * swap_int - swap two integer value
 *
 * @a: first input
 * @b: second input
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
