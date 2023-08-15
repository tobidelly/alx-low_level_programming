#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory initially allocated for struct dog
 * @d: struct dog to free_dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
