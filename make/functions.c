#include <stdio.h>
#include <stdlib.h>

double average(int *arr, int size) {
    double ans = 0;
    for (int i = 0; i < size; i++) {
        ans += arr[i];
    }
    return ans / size;
}

double copy(int *arr, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[i];
    }
}

void printarr(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size - 1]);
}

int lenstr(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len - 1;
}
