#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory space location
 * @str: input string
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length])
		length++;

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
