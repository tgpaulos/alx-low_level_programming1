#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - a function that prints a numbers
 *@n:total number of arguments
 *@separator:separtes each numbers that will be printed
 *Return:0(success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	i = 0;


	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
