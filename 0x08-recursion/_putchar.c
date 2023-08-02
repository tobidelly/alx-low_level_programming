#include "main.h"
#include <unistd.h>

/**
 * _putchar - stdout character c
 * @c: The character to print
 *
 * Return: 1 (Success)
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
