#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - This program Define a new type struct dog
 *@name:name of dog
 *@age: age of dog
 *@owner:the name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog sweet_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
