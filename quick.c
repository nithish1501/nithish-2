#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    int i = low, j = high;
    int pivot = arr[(low + high) / 2];
    int temp;

    while(i <= j) {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(low < j)
        quickSort(arr, low, j);
    if(i < high)
        quickSort(arr, i, high);
}

int main() {
    int arr[5] = {8, 4, 7, 3, 1};
    int n = 5;

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
