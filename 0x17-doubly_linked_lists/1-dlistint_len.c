#include "lists.h"
/**
 *dlistint_len - prints all the elements of a list_t list.
 *@h: pointer to data
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h  == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		count++;
		h = h->next;
	}
	return (count);
}
