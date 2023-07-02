#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Argument
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[]) {
        if (argc != 3) {
                printf("Error: Two arguments are required.\n");
                return 1;
        }

        int num1 = str_to_int(argv[1]);
        int num2 = str_to_int(argv[2]);
        int result = num1 * num2;

        int_to_str(result);
        putchar('\n');

        return 0;
}
