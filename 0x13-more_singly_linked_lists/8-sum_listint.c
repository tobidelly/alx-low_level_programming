#include "lists.h"

/**
 * sum_listint - calculates the sum of all data
 * @head: first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
