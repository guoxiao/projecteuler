#include <stdio.h>
long powermod(long p, long m) {
    long ret = 1;
    for (int i = 1; i <= p; i++) {
        ret *= p;
        ret %= m;
    }
    return ret;
}

int main() {
    long sum = 0;
    long mod = 10000000000l;
    for (int i = 1; i <= 1000; i++) {
        sum += powermod(i, mod);
        sum %= mod;
    }
    printf("%ld\n", sum);
    return 0;
}
