#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and determines whether it is
 * positive, zero, or negative.
 * Prints the corresponding message based on the value of the number.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
		else if (n == 0)
			{
			printf("zero\n");
			}
		else
		{
			printf("negative\n");
		}

	return (0);
}
