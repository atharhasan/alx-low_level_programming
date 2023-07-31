#include "lists.h"

/**
 * pop_listint - function that can add new node
 * @head: pointer from struct
 *
 * Return: the value of element
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
