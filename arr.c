#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(2 * sizeof(int));
    int size = 2;

    arr[0] = 10;
    arr[1] = 20;

    size *= 2;
    arr = realloc(arr, size * sizeof(int));
    arr[2] = 30;
    arr[3] = 40;

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    free(arr);
}