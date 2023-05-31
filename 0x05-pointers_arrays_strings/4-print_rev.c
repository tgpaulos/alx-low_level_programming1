#include "main.h"
#include <stdio.h>
/**
 * print_rev - print astring in reverse
 * @s:string
 * @len: length of string
 * Return:0(success)
 */
void print_rev(char *s)
{
    int i; 
    int len = 0;
    

    while (s[len] != '\0')
    {
        len++;
    }
    
    
    for (i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    

    putchar('\n');
}
