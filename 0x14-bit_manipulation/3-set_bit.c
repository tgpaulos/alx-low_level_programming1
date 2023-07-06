int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= (sizeof(unsigned long int) * 8)) {
        // Error: Invalid index
        return -1;
    }
    
    unsigned long int mask = 1UL << index;
    *n |= mask;
    
    return 1;
}
