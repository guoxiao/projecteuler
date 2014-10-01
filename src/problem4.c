#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int n) {
    char temp[20];
    sprintf(temp, "%d", n);
    size_t len = strlen(temp);
    for (int i = 0; i <= len /2; i++) {
        if (temp[i] != temp[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int max = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (isPalindrome(i*j)) {
                printf("%d*%d=%d\n", i, j, i*j);
                    if (i * j > max) {
                        max = i * j;
                }
            }

        }
    }
    printf("%d\n", max);
    return 0;
}
