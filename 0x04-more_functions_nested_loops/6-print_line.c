#include "main.h"
#include <stdio.h>

/**
 * print_line - This program draws a straight line in the terminal.
 * @n:number of times the character _ should be printed
 * Return: 0(success)
 *
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (i < n)
	{
		putchar('_');
		i++;
	}

	putchar('\n');
}
