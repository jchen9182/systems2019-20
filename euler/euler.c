#include <stdio.h>
#include <stdlib.h>

int problem1();
int problem2();
int problem5();
int problem6();

int problem1() {
  int sum = 0;
  for (int x = 0; x < 1000; x++) {
    if (x % 3 == 0 || x % 5 == 0) sum+=x;
  }
  return sum;
}

int problem2() {
  int first = 1;
  int second = 2;
  int third = 3;
  int ans = 2;
  while (third < 4000000) {
    if (third % 2 == 0) ans += third;
    third = first + second;
    first = second;
    second = third;
  }
  return ans;
}

int problem5() {
  for (int x = 2520; 1; x+= 20) {
    for (int y = 2; y < 20; y++) {
      if (x % y > 0) break;
      if (y == 19) return x;
    }
  }
}

int problem6() {
  int sum1 = 0;
  int sum2 = 0;
  for (int x = 1; x < 101; x++) {
    sum1 += x * x;
    sum2 += x;
  }
  return sum2 * sum2 - sum1;
}

int main() {
  printf("Problem 1: %d\n", problem1());
  printf("Problem 2: %d\n", problem2());
  printf("Problem 5: %d\n", problem5());
  printf("Problem 6: %d\n", problem6());
  return 0;
}
