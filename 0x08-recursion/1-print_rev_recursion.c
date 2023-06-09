#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print reverse of string
 * @s:string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');

		return;
	}
	_print_rev_recursion(s + 1);

	_putchar(*s);
}
