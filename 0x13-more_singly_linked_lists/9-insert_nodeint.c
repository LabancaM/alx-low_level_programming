#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - print element in list
 * @head: list of list
 * @idx: unsigned integer
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
	if (idx == 0)
	{
		save = *head;
		if (*head == NULL)
			return (NULL);
		*head = insert;
		insert->next = save;
		return (insert);
	}
	else
	{
		save = *head;
		while (i <= idx && save != NULL)
		{
			if ((i + 1) == idx)
			{
				previous = save;
				svg = save->next;
				previous->next = insert;
				insert->next = svg;
				return (insert);
			}
			i++;
			save = save->next;
		}
	}
	return (NULL);
}
