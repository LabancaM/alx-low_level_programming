#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - print element in list
 * @head: list of list
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = NULL;
	size_t i = 0;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
