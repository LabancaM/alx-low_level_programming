#include <stdio.h>
#include "lists.h"

/**
 * called_before_main - print content before main
 *
 * Return: nothing
 */
void __attribute__((constructor)) called_before_main()
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
