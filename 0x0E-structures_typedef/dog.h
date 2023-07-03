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

typedef struct dog_t
{
char name[10];
double age;
int height;
char owner[10];
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
