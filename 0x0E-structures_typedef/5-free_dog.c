#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function
 *
 * @d: pointer to struct dog
 *
 * Description: function that free malloc dog
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
