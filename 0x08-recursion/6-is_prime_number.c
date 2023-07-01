#include "main.h"
/**
 *is_prime_number - a function checks for prime number
 *@n:input integer to be checked
 *@divisor:divisor
 *Return:result
 *
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}

	return (1);
}
