#include "main.h"

/**
 * _strlen_recursion - Prints length of a string
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* Return 0 when the end of the string is reached*/
	}
	return (1 + _strlen_recursion(s + 1));
	/* Recursively call the function with the next character in the string*/
}
