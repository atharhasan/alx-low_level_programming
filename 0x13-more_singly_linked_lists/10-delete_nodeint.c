#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index
 * @head: pointer from struct
 * @index: the postion delete from it a node
 *
 * Return: 1 if success -1 if faild
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, prv_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;
	while (node)
	{
		if (i == index)
		{
			prv_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prv_node = node;
		node = node->next;
	}
	return (-1);
}
