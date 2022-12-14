#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* is d a valid entry? */
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
