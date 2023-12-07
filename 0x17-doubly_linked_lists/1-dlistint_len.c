#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: struct linked list
 *
 * Return: the number of elements in linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int num = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		num++;
	}
	return (num);
}
