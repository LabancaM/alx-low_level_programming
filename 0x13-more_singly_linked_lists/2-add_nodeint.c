#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - add node in list
 * @head: list of list
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
