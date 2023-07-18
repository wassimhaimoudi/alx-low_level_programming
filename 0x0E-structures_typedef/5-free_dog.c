#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog -  frees dogs.
 * @d: a pointer to a variable of type dog_t.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
