#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @c: character
 * @size:size of array
 * Return:array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{

		arr[i] = c;
		i++;
	}

	return (arr);
}
