#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of list
 * @head: struct linked list
 * @n: is the index of the node that should be added
 *
 * Return: address for new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
		temp->prev = ptr;
	}
	return (*head);
}
