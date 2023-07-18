#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet, in
 * lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{

	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
	}

	_putchar('\n');
}
