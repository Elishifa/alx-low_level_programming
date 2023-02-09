#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the filename
 * @letters: no. of letters function should read and print
 * Return: returns the actual number of letters it could read and print
 *
 * if the file can not be opened or read, return 0
 *
 * if filename is NULL return 0
 *
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t wr, re, op;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
		if (buff == NULL)
			return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);


		if (op == -1 || re == -1 || wr == -1 || wr != re)
		{
			free(buff);
			return (0);
		}

		free(buff);
		close(op);
		return (wr);
}
