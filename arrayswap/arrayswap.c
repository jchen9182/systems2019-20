#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arr[10];
  srand(time(NULL));
  for (int i = 0; i < 9; i++) {
    arr[i] = rand();
  }
  arr[9] = 0;
  
  printf("Array 1\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", arr[i]);
  }

  int arr2[10];
  int *arr2p = arr2;
  for (int i = 9; i >= 0; i--) {
    *arr2p++ = arr[i]; 
  }

  printf("\nArray 2\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", arr2[i]);
  }
  return 0;
}
