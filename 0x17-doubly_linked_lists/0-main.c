#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}

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
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}