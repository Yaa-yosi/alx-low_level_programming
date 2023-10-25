#include "lists.h"
/**
 *reverse_listint - reverse a linked list
 *@head: pointer to head
 *Return: pointer to the head of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2, *node;

	tmp1 = *head;
	tmp2 = NULL;

	while (tmp1 != NULL)
	{
		node = tmp1->next;
		tmp1->next = tmp2;
		tmp2 = tmp1;
		tmp1 = node;
	}
	*head = tmp2;
	return (tmp2);
}
