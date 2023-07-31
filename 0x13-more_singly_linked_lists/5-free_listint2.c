#include "lists.h"

/**
 * free_listint2 - function that can add new node
 * @head: pointer from struct
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		next_node = node;
		node = node->next;
		free(node);
	}
	*head = NULL;
}
