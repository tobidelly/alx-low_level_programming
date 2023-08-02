#include "main.h"

/**
 * _pow_recursion - this returns the value of x raised to y
 * @x: value
 * @y: power
 *
 * Return: result of x raise to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1); /* -1 indicates error for negative values of y */
	}
	else if (y == 0)
		{
		return (1); /* x raised to the power of 0 is 1 */
		}
		else
		{
		return (x * _pow_recursion(x, y - 1)); /* Calculate x pow y reculsively */
		}
}
