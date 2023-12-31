#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node -  adds a new node at the beginning of a list_t list.
 *@head: function pointer
 *@str: new string
 *Return: addrees
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node2;
	unsigned int len = 0;

	while (str[len])
		len++;

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);

	node2->str = strdup(str);
	node2->len = len;
	node2->next = *head;
	*head = node2;
	return (*head);
}
