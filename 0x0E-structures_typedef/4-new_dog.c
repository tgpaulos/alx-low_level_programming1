#include <stdlib.h>
#include <string.h>

/**
 *new_dog - points to the newly created and initialized dog_t
 *@name:name of dog
 *@age:age of dog
 *@owner:owner of dog
 *Return:new_dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return NULL;

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}

	return new_dog;
}
