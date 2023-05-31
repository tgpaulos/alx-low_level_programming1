


void puts2(char *str) {
    // Loop through the string, printing every other character
    for (int i = 0; str[i] != '\0'; i += 2) {
        putchar(str[i]);
    }

    // Print a newline character
    putchar('\n');
}
