#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generic_swap(void *a, void *b, size_t size) {
    void *temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    double x = 10.5, y = 20.9;
    generic_swap(&x, &y, sizeof(double));
    printf("x: %f, y: %f\n", x, y);
    return 0;
}