#include "lists.h"

/**
 * listint_len - function that can print the value of linked list
 * @h: pointer from struct
 *
 * Return: the count of elements
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
