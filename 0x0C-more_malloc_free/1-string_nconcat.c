#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lenx = 0, leny = 0;

	while (s1 && s1[lenx])
	lenx++;
	while (s2 && s2[leny])
	leny++;

	if (n < leny)
		s = malloc(sizeof(char) * (lenx + n + 1));
	else
		s = malloc(sizeof(char) * (lenx + leny + 1));

	if (!s)
		return (NULL);

	while (i < lenx)
	{
	s[i] = s1[i];
	i++;
	}

	while (n < leny && i < (lenx + n))
		s[i++] = s2[j++];

	while (n >= leny && i < (lenx + leny))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
