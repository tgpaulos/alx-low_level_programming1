#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - a function that prints a name
 *print_string -a function that print input string
 *@name:name that will be printed
 *@f:function pointer
 *Return:0(success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

void print_string(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
