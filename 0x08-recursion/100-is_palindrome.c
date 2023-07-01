#include <string.h>
/**
 *is_palindrome - a function that checks astring palindrome or not
 *@s:input string
  *Return:1(success)
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end;

	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		start++;
		end--;
	}

	return (1);
}
