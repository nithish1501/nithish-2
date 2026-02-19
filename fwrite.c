#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "wb");

    int numbers[3] = {1, 2, 3};
    fwrite(numbers, sizeof(int), 3, fp);

    fclose(fp);
}