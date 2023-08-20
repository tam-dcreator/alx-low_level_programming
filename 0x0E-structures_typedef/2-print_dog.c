#include "dog.h"
/**
*print_dog - Function that prints a struct dog
*@d: Pointer to a struct dog
*
*/
void print_dog(struct dog *d)
{
	char *c = "(nil)";

	if (d)
	{
		if (d->name && d->age && d->owner)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       d->name, d->age, d->owner);
		}
		else if (!d->name)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       c, d->age, d->owner);
		}
		else if (!d->age)
		{
			printf("Name: %s\nAge: %s\nOwner: %s\n",
			       d->name, c, d->owner);
		}
		else if (!d->owner)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       d->name, d->age, c);
		}
	}
}
