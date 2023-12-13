#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a list
 * @head: pointer to first node
 * @n: poiner to data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = tmp;
	tmp->prev = tp;
	return (*head);
}
