#include "main.h"

/**
 * read_textfile- Read text file and print.
 * @filename: name of text file
 * @letters: number represented in code
 * Return: number of bytes
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd;
    ssize_t w;
    ssize_t t;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * (letters + 1));
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    buf[t] = '\0';  // Null-terminate the string

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || w != t)  // Check if write was successful and wrote all bytes
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (w);
}