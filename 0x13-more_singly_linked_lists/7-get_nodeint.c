#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t
 * @head: pointer head node
 * @index:node index from 0
 * Return: NULL if none existent
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	for (ind = 0; ind < index; ind++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
