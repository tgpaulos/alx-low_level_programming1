#include"main.h"
#include <stdio.h>

/**
 * print_numbers - This program prints the numbers, from 0 to 9
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
