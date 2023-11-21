#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - print element in list
 * @head: list of list
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail = NULL;
	listint_t *save = NULL;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
		*head = new_tail;
	else
	{
		save = *head;
		while (save->next != NULL)
			save = save->next;
		save->next = new_tail;
	}
	return (new_tail);
}
