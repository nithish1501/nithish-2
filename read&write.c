#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text: ");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
