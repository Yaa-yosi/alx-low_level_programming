#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to first node
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	size_t node_count = 0;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			exit(98);
		}
	}

	if (fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
	}
	return (node_count);
}

