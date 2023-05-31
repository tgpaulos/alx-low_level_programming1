#include <stdio.h>
#include <string.h>
/**
 * puts_half - print the second half of the string
 * @str: string
 * Return:0(success)
 */


void puts_half(char *str)
{
	int len = strlen(str);
	int start;
	int i;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
