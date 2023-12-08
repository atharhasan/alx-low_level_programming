#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: struct linked list
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
	{
		free(head);
	}
}
