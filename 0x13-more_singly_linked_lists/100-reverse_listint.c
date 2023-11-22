#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - delete element in list
 * @head: list of list
 *
 * Return: listint_t 
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *save = NULL, *svg = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		svg = (*head)->next;
		(*head)->next = save;
		save = *head;
		*head = svg;
	}
	*head = save;
	return (*head);
}
