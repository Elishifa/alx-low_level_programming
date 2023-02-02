#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free listint_t
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
