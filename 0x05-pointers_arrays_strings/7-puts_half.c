void puts_half(char *str) {
    // Get the length of the string
    int len = strlen(str);

    // Calculate the starting index for printing
    int start = len / 2;
    if (len % 2 == 1) {
        start = (len - 1) / 2;
    }

    // Print the second half of the string
    for (int i = start; i < len; i++) {
        putchar(str[i]);
    }

    // Print a newline character
    putchar('\n');
}

