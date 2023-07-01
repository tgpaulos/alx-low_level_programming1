#include "main.h"
/**
 *_pow_recursion -a function that returns the power of x raise to y
 *@x:the base number
 *@y:exponent to which the base number is raised
 *Return: result
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
