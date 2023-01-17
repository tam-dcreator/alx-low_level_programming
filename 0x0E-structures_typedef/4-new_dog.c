#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - Function that creates a new dog
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: Owner of the dog
 *
 *Return: Pointer to new struct of type dog_t or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
