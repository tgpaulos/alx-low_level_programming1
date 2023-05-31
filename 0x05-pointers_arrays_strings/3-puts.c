#include <stdio.h>
/**
 *_puts - This  function prints a string
 * @str: string
 * Return:0(success)
 */

void _puts(char *str)
{
	int s = 0;

	do {
		putchar(str[s]);
		s++;
	} while (str[s] != '\0');
	putchar('\n');
}
