#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: A pointer
 * @idx: The index of the listint_t list
 * @n: value of a new node
 *
 * Return: If the function fails - NULL
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

		unsigned int j;
		listint_t *hed, *new;

		if (head == NULL)
			return (NULL);

		if (idx != 0)
		{
			hed = *head;
			for (j = 0; j < idx - 1 && hed != NULL; j++)
			{
				hed = hed->next;
			}
			if (hed == NULL)
				return (NULL);
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		new->next = hed->next;
		hed->next = new;
		return (new);
}
