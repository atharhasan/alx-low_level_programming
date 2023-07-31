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
	node = head;

	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
		head = next_node;
	}
}
