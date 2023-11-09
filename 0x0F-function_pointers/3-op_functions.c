#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - module
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
