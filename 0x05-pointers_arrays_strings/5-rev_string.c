void rev_string(char *s) {
    // Get the length of the string
    int len = strlen(s);

    // Reverse the string in place
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}
