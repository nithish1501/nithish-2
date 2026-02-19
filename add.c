#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    int (*operations[2])(int, int) = { add, sub };

    printf("Add: %d\n", operations[0](10, 5));
    printf("Sub: %d\n", operations[1](10, 5));
}