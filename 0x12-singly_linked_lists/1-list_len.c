#include "lists.h"

/**
 * list_len - function that return the value of linked list
 * @h: pointer from struct
 *
 * Return: the count of elements
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
