#include "lists.h"

/**
 * print_listint - function that can print the value of linked list
 * @h: pointer from struct
 *
 * Return: the count of elements
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
