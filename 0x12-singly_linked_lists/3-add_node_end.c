#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - print element in list
 * @head: list of list
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = NULL;
	list_t *save = NULL;
	size_t i = 0;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new_tail->len = i;
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
