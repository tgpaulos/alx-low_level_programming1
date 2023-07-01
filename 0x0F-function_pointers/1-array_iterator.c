#include "main.h"
#include <stddef.h>

/**
 *array_iterator - a pointer to the function that will be executed
 *@size:size of the array
 *@array:array of integer
 *@action:pointer
 *Return:array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
