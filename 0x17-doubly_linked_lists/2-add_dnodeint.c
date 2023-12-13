#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a list
 * @head: pointer to first node
 * @n: poiner to data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (*head);
}
