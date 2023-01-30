#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node - adds new node at the start
 * @head: head of linked list
 * @str: needs duplication
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	size_t nelem;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (nelem = 0; str[nelem]; nelem++)
		;

	new->len = nelem;
	new->next = *head;
	*head = new;

	return (*head);
}
