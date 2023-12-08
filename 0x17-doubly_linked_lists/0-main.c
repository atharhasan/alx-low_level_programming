#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int num = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}
	return (num);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}