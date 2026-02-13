#include <stdio.h>


typedef int (*operation_t)(int, int);

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }


void compute(int x, int y, operation_t op) {
    printf("Result: %d\n", op(x, y));
}

int main() {
    compute(5, 3, add);      
    compute(5, 3, multiply); 
    return 0;
}