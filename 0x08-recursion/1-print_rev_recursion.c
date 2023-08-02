#include "main.h"

/**
 * _print_rev_recursion - prototype to print a string in reverse
 * @s: strings to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return; /* Stops recursion when the end of the string is reached*/
	}

	_print_rev_recursion(s + 1); /* Calls function character in the string*/
	_putchar(*s); /* Prints current character in reverse order*/

}
