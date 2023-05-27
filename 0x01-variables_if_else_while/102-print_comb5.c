#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; y < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
