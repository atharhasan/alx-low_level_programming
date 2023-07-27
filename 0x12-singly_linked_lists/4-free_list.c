#include "lists.h"

/**
 * free_list - function that can add new node
 * @head: pointer from struct
*/

void free_list(list_t *head)
{
	if (!head)
		free(head);
}
