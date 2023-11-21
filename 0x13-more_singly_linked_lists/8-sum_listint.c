#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - print element in list
 * @head: list of list
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while(head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
