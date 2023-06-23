#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - a function that prints a string
 *@n:number of arguments srguments
 *@separator:separates each strings
 *Return: 0(success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
        char *str;
	va_list args;
	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
