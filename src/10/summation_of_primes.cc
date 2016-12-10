#include <iostream>

int main() {
  int prime[2000000] = {0};
  for (int i = 2; i < 2000000; i++) {
    for (int j = 2; i * j < 2000000; j++) {
      prime[j * i] = 1;
    }
  }

  long sum = 0;
  for (int i = 2; i < 2000000; i++) {
    sum += prime[i] ? 0 : i;
  }
  std::cout << sum << std::endl;
}
