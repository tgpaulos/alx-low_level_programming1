#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0, y = 1, z = 2;

	while (x <= 7)
	{
		while (y <= 8)
		{
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	putchar('\n');
	return (0);
}
