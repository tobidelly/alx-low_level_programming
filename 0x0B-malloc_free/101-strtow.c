#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len, word_count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		while (str[k] && str[k] == ' ')
			k++;
		len = 0;
		while (str[k + len] && str[k + len] != ' ')
		len++;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[k++];
		words[i][j] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char **words = strtow("   Hello   world!  How  are  you?   ");

	if (words)
	{
		int i = 0;

		while (words[i])
		{
			printf("%s\n", words[i]);
			free(words[i]);
			i++;
		}
		free(words);
	}
	return (0);
}
