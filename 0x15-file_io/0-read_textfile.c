#include "main.h"

/**
 * read_textfile - Read text file and print to STDOUT
 * @filename: name of text file
 * @letters: number represented in code
 * Return: number of bytes, if failed returns (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t re, wri;
	char *buff;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	re = read(op, buff, letters);
	wri = write(STDOUT_FILENO, buff, re);

	close(op);

	free(buff);

	return (wri);
}