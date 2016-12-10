#include <iostream>

template <int N>
void multiply(int (&sum)[N], int number) {
  int carry = 0;
  for (int i = 0; i < N; i++) {
    sum[i] *= number;
    sum[i] += carry;
    carry = sum[i] / 10;
    sum[i] = sum[i] % 10;
  }
}

int main() {
  int sum[256] = {0};
  sum[0] = 1;
  for (int i = 2; i <= 100; i++) {
    multiply(sum, i);
  }
  for (int i = 255; i >= 0; i--) {
    if (sum[i] > 0) {
      std::cout << sum[i];
    }
  }
  std::cout << std::endl;
  int result = 0;
  for (int i = 0; i < 256; i++) {
    result += sum[i];
  }
  std::cout << result << std::endl;
  return 0;
}
