#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;
    if (n % 5 == 0) return false;
    for (int i = 5; i < n/2; i += 2) if (n % i == 0) return false;
    return true;
}

int main() {
    for (int i = 0; i < 100000; i++) {
        if (isPrime(i)) {
            printf("prime number found: %d\n", i);
        }
    }
    return 0;
}
