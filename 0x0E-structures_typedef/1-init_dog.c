#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to the dog structure to be initialized.
 * @name: pointer to a string containing the name of the dog.
 * @age: the age of the dog.
 * @owner: pointer to the name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
