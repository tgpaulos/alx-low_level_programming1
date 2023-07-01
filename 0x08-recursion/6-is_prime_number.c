#include "main.h"
/**
 *is_prime_number - a function checks for prime number
 *@n:input integer to be checked
 *@divisor:divisor
 *Return:result
 *
 */

int is_prime_number(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (n, divisor + 1);
}
