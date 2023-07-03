#include <stdlib.h>
#include <string.h>

/**
 *new_dog - points to the newly created and initialized dog_t
 *@name:name of dog
 *@age:age of dog
 *@owner:owner of dog
 *Return:new_dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{

	int i;

	dog_t *new_dog = malloc(sizeof(dog_t));

	int name_len = 0, owner_len = 0;

	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
	{
		new_dog->name[i] = name[i];
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	
	for (i = 0; i < owner_len && owner[i] != '\0'; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[i] = '\0';

	new_dog->age = age;

	return new_dog;
}
