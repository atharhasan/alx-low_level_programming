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
	if (d != NULL)
		free(d);
}
