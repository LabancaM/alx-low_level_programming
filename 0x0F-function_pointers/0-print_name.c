#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: name to print
 * @f: function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
