#include <stdbool.h>

bool getBit(long long n, int k) {
    return (n >> k) & 1LL;
}

long long setBit(long long n, int k) {
    return (1LL << k) | n;
}

long long clearBit(long long n, int k) {
    return n & ~(1LL << k);
}

long long toggleBit(long long n, int k) {
    return n ^ (1LL << k);
}

bool isPowerOfTwo(long long n) {
    return (n > 0 && (n & (n - 1)) == 0);
}

long long countSetBits(long long n) {
    long long count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}
#include <stdio.h>
#include <stdbool.h>

int main() {
    long long n = 13;
    int k = 2;

    printf("Get Bit: %lld\n", getBit(n, k));
    printf("Set Bit: %lld\n", setBit(n, k));
    printf("Clear Bit: %lld\n", clearBit(n, k));
    printf("Toggle Bit: %lld\n", toggleBit(n, k));
    printf("Power of Two: %s\n",
           isPowerOfTwo(n) ? "true" : "false");
    printf("Set Bits Count: %lld\n", countSetBits(n));

    return 0;
}