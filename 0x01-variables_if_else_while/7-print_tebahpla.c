#include <stdio.h>

/**
 * main - Entry point
 *
 * Write a program that prints the lowercase alphabet in reverse, followed
 * by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}

	putchar('\n');

	return (0);
}
