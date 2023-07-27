#include <unistd.h>

/**
 * _putchar - prints one character at a time 
 * @n: integer 
 * Return: ASCII value of n
 *
 */

int _putchar(int n)
{
	return write(1, &n, 1);

}
