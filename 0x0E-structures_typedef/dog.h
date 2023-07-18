#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *
 * @name: a dog name
 * @age: a dog age
 * @owner: a dog owner's
 *
 * Description: struct to define this arg
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
