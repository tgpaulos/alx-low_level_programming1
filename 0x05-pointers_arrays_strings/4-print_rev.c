#include "main.h"
#include <stdio.h>
/**
 * print_rev - print astring in reverse
 * @s:string
 * Return:0(success)
 */
void print_rev(char *s)
{
	int n = 0;
	int a;

	while (s[n] != '\0')
	{
		n++;
	}

	for (a = n - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
}
