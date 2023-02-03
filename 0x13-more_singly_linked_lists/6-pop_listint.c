#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to head
 * Return: 0 if empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *hen;
		int hed;

		if (*head == NULL)
			return (0);
		hen = *head;
		hed = (*head)->n;
		*head = (*head)->next;
		free(hen);
		return (hed);
}
