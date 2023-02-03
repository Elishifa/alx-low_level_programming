#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: is the pointer to head node
 * Return: address of the node where the loop starts,
 *  or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	one = two = head;

	if (head == NULL || head->next->next == NULL)
		return (NULL);

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			printf("loop found");
		}
		return (two);
	}
	return (NULL);
}
