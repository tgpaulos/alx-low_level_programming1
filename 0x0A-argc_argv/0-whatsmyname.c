#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of the program
 *@argc:number of arguments
 *@argv:array of arguments
 *@Return:0(success)
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
