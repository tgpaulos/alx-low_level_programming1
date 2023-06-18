#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - a function that allocates memory for an array of elements
 *@nmemb:number of elements in the array
 *@size:the size of each element in bytes
 *Return:pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	ptr = malloc(nmemb  * size);


	if (ptr == NULL)
	{
		return (NULL);
	}

	p = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (ptr);
}
