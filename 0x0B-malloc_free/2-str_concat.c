#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int lenx = 0, leny = 0, i, j;

	if (s1 != NULL)
		lenx = strlen(s1);
	if (s2 != NULL)
		leny = strlen(s2);
	concatenated = malloc((lenx + leny + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < lenx; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < leny; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
