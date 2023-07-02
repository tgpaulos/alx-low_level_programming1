#include <string.h>
#include "main.h"

/**
 *is_palindrome - a function that checks astring palindrome or not
 *@s:input string
  *Return:1(success)
 */
  

int is_palindrome(char *s)
{
	int start;
	int end;
	char temp;
	int result;

	int length = strlen(s);
	if (length <= 1)
	{
		return (1);
	}

	
	end = length - 1;

	if (s[start] != s[end])
	{
		return (0);
	}

	temp = s[start];
	s[start] = '\0';
	result = is_palindrome(s + 1);
	s[start] = temp;

	return (result);
}
