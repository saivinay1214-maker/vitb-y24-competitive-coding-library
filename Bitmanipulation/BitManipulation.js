class BitManipulation {
static getBit(n, k) {
    return (n >> k) & 1;
}

static setBit(n, k) {
    return n | (1 << k);
}

static clearBit(n, k) {
    return n & ~(1 << k);
}

static toggleBit(n, k) {
    return n ^ (1 << k);
}

static isPowerOfTwo(n) {
    return n > 0 && (n & (n - 1)) === 0;
}

static countSetBits(n) {
    let count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}
}
console.log(BitManipulation.getBit(13, 2));       // 1
console.log(BitManipulation.setBit(13, 1));       // 15
console.log(BitManipulation.clearBit(13, 2));     // 9
console.log(BitManipulation.toggleBit(13, 1));    // 15
console.log(BitManipulation.isPowerOfTwo(16));    // true
console.log(BitManipulation.countSetBits(13));    // 3