#include "lists.h"

/**
 *listint_len -  number of elements in a linked listint_t list.
 *@h: pointer to array
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		h = h->next;
		n_count++;
	}
	return (n_count);
}
