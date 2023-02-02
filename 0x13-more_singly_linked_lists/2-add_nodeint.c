#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds new node at the beginning of listint_t
 * @head: pointer to singly list
 * @n: new node integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node != NULL)
		node++;

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
