#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: pointer to string
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_count++;
	}
	return (n_count);
}

