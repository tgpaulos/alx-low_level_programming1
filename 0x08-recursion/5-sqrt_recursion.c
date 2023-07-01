#include "main.h"
/**
 *_sqrt_recursion -a function that returns the natural square root of a number
 *@n:input
 *Return:square root of a number
 */

int _sqrt_recursion(int n)
{
	int start = 0;
        int end = n;
	int mid;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	
	
	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		start = mid + 1;
		return (_sqrt_recursion(n));
	}

	end = mid - 1;
	return (_sqrt_recursion(n));
}
