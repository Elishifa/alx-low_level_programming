#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node at end of list
 * @head: node head
 * @str: string being added to list_t list
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		dup = strdup(str);
			if (str == NULL)
			{
				free(new);
				return (NULL);
			}
			for (len = 0; str[len];)
				len++;
			new->str = dup;
			new->len = len;
			new->next = NULL;

			if (*head == NULL)
				*head = new;
			else
			{
				tail = *head;
				while (tail->next != NULL)
					tail = tail->next;
				tail->next = new;
			}
			return (*head);
}
