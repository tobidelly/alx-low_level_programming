#include "main.h"
#include <unistd.h>

/**
 * _putchar file contains what is written out since the program doesn't
 * include standard library
 * 
 * c is the character to print
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
