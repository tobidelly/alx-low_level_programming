#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function frees list
 * @head: list_t is the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
