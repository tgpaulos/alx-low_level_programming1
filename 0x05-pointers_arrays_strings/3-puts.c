#include <stdio.h>
#include "main.h"
/**
 *_puts - This  function prints a string
 * @str: string
 * Return:0(success)
 */

void _puts(char *str)
{
	int i = 0;

	do {
		putchar(str[i]);
		i++;
	} while (str[i] != '\0');
	putchar('\n');
}
