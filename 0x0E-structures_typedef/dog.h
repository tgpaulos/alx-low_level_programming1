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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
