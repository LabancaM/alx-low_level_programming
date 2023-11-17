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
	list_t *save = NULL, *new = NULL;

	new = head;
	while (new != NULL)
	{
		save = new->next;
		free(new->str);
		free(new);
		new = save;
	}
	head = NULL;
}
