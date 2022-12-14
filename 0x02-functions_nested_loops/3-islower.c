#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: character checked
 * Return: 1 if char is lowercas, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
