unsigned int set_bit(unsigned int num, int pos) {
    return num | (1 << pos);
}

unsigned int clear_bit(unsigned int num, int pos) {
    return num & ~(1 << pos);
}