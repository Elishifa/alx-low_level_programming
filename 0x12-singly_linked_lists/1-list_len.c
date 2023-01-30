#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns number of elements in list_t
 * @h: head of linked list
 * Return: nodes no
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
