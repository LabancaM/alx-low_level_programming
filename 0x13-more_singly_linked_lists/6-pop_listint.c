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
	listint_t *remove = NULL;
	int value;

	if (*head == NULL)
		return (0);
	remove = *head;
	value = remove->n;
	*head = remove->next;
	free(remove);
	return (value);
}
