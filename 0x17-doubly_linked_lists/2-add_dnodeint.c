#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a list
 * @head: pointer to first node
 * @n: poiner to data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	tmp->next = h;
	if (h != NULL)
		h->prev = tmp;
	*head = tmp;
	return (tmp);
}
