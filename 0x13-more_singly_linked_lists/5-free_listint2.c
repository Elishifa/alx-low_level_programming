#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees listint_t2
 * @head: pointer to head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *list2;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		list2 = (*head)->next;
		free(*head);
		*head = list2;
	}
}
