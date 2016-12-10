#include <stdio.h>
int fifthpower(int n) { return n * n * n * n * n; }

int fifthpowerofdigit(int n) {
  return fifthpower(n % 10) + fifthpower((n / 10) % 10) +
         fifthpower((n / 100) % 10) + fifthpower((n / 1000) % 10) +
         fifthpower((n / 10000) % 10) + fifthpower((n / 100000) % 10);
}
int main() {
  int sum = 0;
  for (int i = 2; i < 1000000; i++) {
    if (fifthpowerofdigit(i) == i) {
      printf("number is %d\n", i);
      sum += i;
    }
  }
  printf("sum is %d\n", sum);
}
