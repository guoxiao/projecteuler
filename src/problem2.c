#include <stdio.h>

int main(){
    int a = 1, b = 1, c = a+b;
    int sum = 0;
    while (b < 4000000) {
        c = b + c;
        a = b;
        b = c - b;
        if (b % 2 == 0) {
            sum += b;
        }
    }
    printf("%d\n", sum);
    return 0;
}
