#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses
 * @head: A pointer too head
 * Return: to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past, *front;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	past = NULL;
	while (*head != NULL)
	{
		front = (*head)->next;
			(*head)->next = past;
		past = *head;
		*head = front;
	}
	*head = past;
	return (*head);
}
