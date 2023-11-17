#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - print element in list
 * @head: list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
