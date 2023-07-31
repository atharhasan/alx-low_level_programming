#include "lists.h"

/**
 * add_nodeint - function that can add new node
 * @head: pointer from struct
 * @n: the value of new node
 *
 * Return: the address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	int num = n;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = *head;
	new_node->n = num;
	*head = new_node;

	return (new_node);
}
