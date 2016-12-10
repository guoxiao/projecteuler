#include <stdio.h>
int getCountOfDividor(long n) {
  long count = 0;
  long i;
  for (i = 1; i * i < n; i++) {
    if (n % i == 0)
      count++;
  }
  count *= 2;
  if (i * i == n)
    count++;
  return count;
}

int main() {
  for (long i = 0; i < 10000000; i++) {
    long number = i * (i + 1) / 2;
    long count;
    if ((count = getCountOfDividor(number)) >= 500) {
      printf("number is %ld, count is %ld\n", number, count);
      break;
    }
  }
}
