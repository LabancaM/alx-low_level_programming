#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - print element in list
 * @head: list of list
 *
 * Return: listint_t
 */
int pop_listint(listint_t **head)
{
	listint_t *save = NULL, *remove = NULL;

	if (*head == NULL)
		return (0);
	remove = *head;
	save = remove;
	*head = save->next;
	return (save->n);
}
