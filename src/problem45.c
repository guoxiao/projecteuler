#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPangagon(long long n) {
    double delta = sqrt(n * 24 + 1);
    return (delta - (int)(delta) <= 0.0000001) && (1 + (int)(delta)) % 6 == 0;
}

bool isHexagonal(long long n) {
    double delta = sqrt(n * 8 + 1);
    return (delta - (int)(delta) <= 0.0000001) && (1 + (int)(delta)) % 4 == 0;
}

int main(){
    long long i = 1;
    long long t;
    while (1) {
        t = i * (i + 1) / 2;
        if (isPangagon(t) && isHexagonal(t))
            printf("%lld %lld\n", i, t);
        i++;
    }
    return 0;
}
