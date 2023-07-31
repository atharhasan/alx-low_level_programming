#include "lists.h"

/**
 * add_nodeint_end - function that can add new node
 * @head: pointer from struct
 * @n: the value of new node
 *
 * Return: the address of new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int num = n;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !new_node)
		return (NULL);
	if (node)
	{
		while (node->next != NULL)
			node =  node->next;
		node->next = new_node;
		new_node->n = num;
	} else
	{
		*head = new_node;
	}
	return (new_node);
}
