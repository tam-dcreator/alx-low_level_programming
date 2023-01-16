#include "dog.h"

/**
 *init_dog - Function that initialize a variable of type struct dog
 *@d: Pointer to struct my_dog address
 *@name: Name to pass to d
 *@age: Age to pass to d
 *@owner: to pass to d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return ;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
