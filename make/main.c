int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    printf("The average is: %lf\n", average(arr, 5));

    int arr2[5];
    copy(arr, arr2, 5);
    printf("Initial: ");
    printarr(arr, 5);
    printf("Copy: ");
    printarr(arr2, 5);

    char str[5] = "apple";
    printf("The length of 'apple' is: %d\n", lenstr(str));

    return 0;
}
