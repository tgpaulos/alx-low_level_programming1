#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *malloc_checked - checks weather malloc fails or not
 *@b:argument
 *Return:pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
