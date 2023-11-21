#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - compute length of list
 * @h: list
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
