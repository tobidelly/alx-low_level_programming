#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific phrase to the standard error.
 * The phrase is "and that piece of art is useful"
 * followed by the author's name and the date.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
