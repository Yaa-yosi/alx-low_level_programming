#include "lists.h"
/**
 *sum_dlistint - prints the sum of all elements of a list_t list.
 *@head: pointer to data
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head  != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
