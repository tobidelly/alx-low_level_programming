#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
		s--;
		for (o = length; o > 0; o--)
		{
			_putchar(*s);
			s--;
		}
	_putchar('\n');
}
