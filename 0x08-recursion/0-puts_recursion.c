#include "main.h"

/**
 * _puts_recursion - puts() function
 * @s: this is the input
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); /* Recursively calls function character in string*/
	}
	else
		{
		_putchar('\n'); /* Print a new line at the end of the string */
		}
}
