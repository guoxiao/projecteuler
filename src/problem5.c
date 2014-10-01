#include <stdio.h>

long gcd(long a, long b) {
    while(1) {
        if (b == 0) return a;
        if (a % b == 0) return b;
        a = a % b;
        b = b % a;
    }
}

long lcm(long a, long b) {
    return a * b / gcd(a, b);
}

int main() {
    long sum = 1;
    for (int i = 1; i <= 20; i++) {
        sum = lcm(sum, i);
        printf("%d %ld\n", i, sum);
    }
    printf("%ld\n", sum);
    return 0;
}
