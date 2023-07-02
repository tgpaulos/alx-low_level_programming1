#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2;
	int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;

	while (s1[length1])
		length1++;

	length2 = 0;

	while (s2[length2])
		length2++;

	concatenated = (char *)malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenated == NULL)
		return (NULL);

	i = 0;
	for (j = 0; j < length1; j++, i++)
		concatenated[i] = s1[j];

	for (j = 0; j < length2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
