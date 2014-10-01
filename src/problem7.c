#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    for (int i = 2, count = 0; ;i++) {
        if (isPrime(i)) {
            count++;
            if (n == count) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    printf("%d\n", nthPrime(10001));
    return 0;
}
