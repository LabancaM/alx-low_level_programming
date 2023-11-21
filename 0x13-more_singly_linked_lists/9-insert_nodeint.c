#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - print element in list
 * @head: list of list
 * @ix: unsigned integer
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *save = NULL, *insert = NULL;
	listint_t *svg = NULL, *previous = NULL;

	insert = malloc(sizeof(listint_t));
	svg = *head;
	if (insert == NULL || head == NULL)
		return (NULL);
	insert->n = n;
	while(*head != NULL)
	{
		if (idx == 0)
		{
			save = *head;
			*head = insert;
			(*head)->next = save;
			return (insert);
		}
		else
		{
			if ((i + 1) == idx)
				previous = *head;
			if (i == idx)
			{
				save = *head;
				previous->next = insert;
				insert->next = save;
				*head = svg;
				return (insert);
			}
		}
		i++;
		*head = (*head)->next;
	}
	return (NULL);
}
