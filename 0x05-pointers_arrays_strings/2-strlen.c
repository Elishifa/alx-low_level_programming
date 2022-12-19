#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: length of string
 * Return: length of string
 */

int _strlen(char *s)
{
	int m = 0; /* counting starts from 0*/

	for (; *s++;)
		m++;
	return (m);
}
