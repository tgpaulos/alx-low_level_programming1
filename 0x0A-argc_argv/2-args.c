#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints all arguments it receives
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0(sucess)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
