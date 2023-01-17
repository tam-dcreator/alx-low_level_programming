#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	/*Create new dog from dog_t*/
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	/*Check if name is NULL and free all malloc if it is*/
	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}


	/*Create a malloc for new name and copy name into it*/
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->age = age;
	/*Check if owner is null and free all malloc if it is*/
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/*Create a malloc for new owner and copy the value of owner into it*/
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	/*Return new dog*/
	return (dog);
}
