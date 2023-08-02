#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1); /* Return -1 for negative values of n */
	}
	else if (n == 0)
		{
		return (1); /* Factorial of 0 is 1 */
		}
	else
	{
	return (n * factorial(n - 1));
	}
}
