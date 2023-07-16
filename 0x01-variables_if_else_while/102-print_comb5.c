#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of two two-digit number
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));

				if (a != 98 || b != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

		putchar('\n');

	return (0);
}
