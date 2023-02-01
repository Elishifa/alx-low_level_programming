#include "main.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t 
 * @h: head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
