#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node of lists
 * @head: struct linked list
 * @index: is the index of the node that should be deleted
 *
 * Return: 0
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
