#include "lists.h"

/**
 * print_list - function that can print the value of linked list
 * @h: pointer from struct
 *
 * Return: the count of elements
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
