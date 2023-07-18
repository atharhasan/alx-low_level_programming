#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a dog struct
 *
 * @d: pointer to struct dog
 * @name: a dog name
 * @age: a dog age
 * @owner: a dog owner's
 *
 * Description: function that declare dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
