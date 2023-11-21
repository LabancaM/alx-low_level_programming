#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - print element in list
 * @head: list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *save = NULL, *new = NULL;

	new = *head;
	while (new != NULL)
	{
		save = new->next;
		free(new);
		new = save;
	}
	*head = NULL;
}
