#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
