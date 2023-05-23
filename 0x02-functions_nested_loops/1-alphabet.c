#include "main.h"
/**
 * print_alphabet - This program prints alphabet in lowercase
 * Return :0
 *
 */


void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
