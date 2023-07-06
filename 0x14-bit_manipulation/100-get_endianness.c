#include "main.h"

/**
 * get_endianness - a function  that checks the endianness
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	if (*ptr == 1)
	{

		return (1);
	}
	else
	{

		return (0);
	}
}
