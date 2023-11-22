#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete element in list
 * @head: list of list
 * @index: unsigned integer
 *
 * Return: 1 if deleting was successuf -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *save = NULL, *svg = NULL, *svg2 = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		save = *head;
		if (save == NULL)
			return (-1);
		*head = save->next;
		free(save);
		return (1);
	}
	else
	{
		save = *head;
		while (i <= index && save != NULL)
		{
			if ((i + 1) == index)
			{
				svg = save;
				svg2 = save->next->next;
				free(save->next);
				svg->next = svg2;
				return (1);
			}
			i++;
			save = save->next;
		}
	}
	return (-1);
}
