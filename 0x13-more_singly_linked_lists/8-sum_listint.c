#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns sum of all data
 * @head: pointer to head
 * Return: the sum of n
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
