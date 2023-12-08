#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node at index
 * @head: struct linked list
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(temp);

	return (1);
}
