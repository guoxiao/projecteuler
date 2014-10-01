#include <stdio.h>
#include <stdbool.h>

bool isPrime(long n) {
//    printf("isprime:%d\n", n);
    for (long i=2; i*i < n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

long getAFactor(long n) {
    for (long i = 2; i < n; i ++) {
        if (n % i == 0 && isPrime(i)) {
            return i;
        }
    }
    return n;
}

int main() {
    long max = 0;
    long n = 600851475143;
    long ret = 0;
    while ((ret = getAFactor(n)) != 1){
        printf("factor:%ld\n", ret);
        n = n / ret;
        if (ret > max) {
            max = ret;
        }
    }
    printf("%ld\n", max);
    return 0;
}
