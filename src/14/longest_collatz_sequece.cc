#include <iostream>

long getLength(long n) {
  long count = 0;
  while (n != 1) {
    n = n % 2 == 0 ? n / 2 : n * 3 + 1;
    count++;
  }
  return count;
}

int main() {
  long max = 0;
  for (long i = 1; i <= 1000000; i++) {
    long count = getLength(i);
    if (count > max) {
      max = count;
      std::cout << i << ' ' << count << '\n';
    }
  }

  std::cout << "max: " << max << '\n';
}
