#include <stdio.h>

/**
 * main - prints number of args passed to it
 * @argc: argument count
 * @argv: containing command line args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
