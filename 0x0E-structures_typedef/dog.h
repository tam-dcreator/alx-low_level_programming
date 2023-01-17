#ifndef HEADER_FILE
#define HEADER_FILE

/**
 *struct dog - new type for dog info
 *@name: Dogs name
 *@age: Dogs age
 *@owner: Dogs owner
 *
 *Description: Nothing else to add
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif/*HEADER_FILE*/
