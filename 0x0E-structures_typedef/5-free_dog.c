#include "dog.h"
/**
*free_dog - Function to free a strut dog
*@d: Pointer to a struct dog
*
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
