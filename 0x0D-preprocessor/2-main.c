#include <stdio.h>

/**
 * main - This program prints the name of the file it was compiled from
 * Return: 0(success)
 */

int main(void)
{
        printf("This program was compiled from the file: %s\n", __FILE__);
        return (0);
}
