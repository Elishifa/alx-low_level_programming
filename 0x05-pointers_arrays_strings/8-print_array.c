#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array input
 * @n: n input elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
