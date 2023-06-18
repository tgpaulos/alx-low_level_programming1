#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat-concatenate two strings
 *@s1: string one
 *@s2:string two
 *@n:number of characters
 *Return:new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	newstr = malloc(len1 + n + 1);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		newstr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		newstr[len1 + i] = s2[i];
	}
	newstr[len1 + n] = '\0';

	return (newstr);
}
