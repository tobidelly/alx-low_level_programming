#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
i * @n: Calculate the square root of n
 *
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Indicates an error for negative values of n */
	}
	else if (n == 0 || n == 1)
		{
		return (n); /* Square root of 0 and 1 is the number */
		}
	else
	{
	for (int i = 1; i <= n; i++) /* Search for the square root */
	{
		if (i * i == n)
		{
		return (i);
		} /* If i*i is greater than n, n doesn't matter */
			else if (i * i > n)
			{
			return (-1);
			}
		return (-1); /* In case of an unexpected error */
	}
	}
}
