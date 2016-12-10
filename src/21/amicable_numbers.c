#include <stdio.h>
int getPartner(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0)
      sum += i;
  }
  return sum;
}

int main() {
  int sum = 0;
  for (int i = 1; i < 10000; i++) {
    int partner = getPartner(i);
    if (partner > i && getPartner(partner) == i) {
      printf("%d <=> %d\n", i, partner);
      sum += i + partner;
    }
  }
  printf("sum is %d\n", sum);
}
