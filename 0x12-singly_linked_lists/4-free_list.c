#include "lists.h"

/**
 * free_list - function that can add new node
 * @head: pointer from struct
*/

void free_list(list_t *head)
{
	char *c = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = c;
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	} else
		*head = new_node;
	free(head);
}
