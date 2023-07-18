#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function
 *
 * @d: pointer to struct dog
 *
 * Description: function that print dog info
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
