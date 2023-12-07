#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of
 * @head: struct linked list
 * @n: is the index of the node that should be deleted
 *
 * Return: the address for new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
