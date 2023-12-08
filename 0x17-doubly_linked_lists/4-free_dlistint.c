#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: struct linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
