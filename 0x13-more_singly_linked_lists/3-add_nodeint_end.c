#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add node at end
 * @head: pointer to head link
 * @n: integer of new node
 * Return: address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	end = malloc(sizeof(listint_t));

	if (!head)
	{
		return (NULL);
	}

	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		new = *head;
			return (new);
	}
	while (end->next)
	{
		end = end->next;
	}
	new->next = end;
	return (new);
}
