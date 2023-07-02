#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index -  returns the index places the cmp function
 * @array: array
 * @size: size of elements in array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
