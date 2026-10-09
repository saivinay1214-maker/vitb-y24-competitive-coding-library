class BitManipulation:

    @staticmethod
    def getBit(n, k):
        return (n >> k) & 1

    @staticmethod
    def setBit(n, k):
        return (1 << k) | n

    @staticmethod
    def clearBit(n, k):
        return n & ~(1 << k)

    @staticmethod
    def toggleBit(n, k):
        return n ^ (1 << k)

    @staticmethod
    def isPowerOfTwo(n):
        return n > 0 and (n & (n - 1)) == 0

    @staticmethod
    def countSetBits(n):
        count = 0

        while n > 0:
            n = n & (n - 1)
            count += 1

        return count
n = 13
k = 2

print("Get Bit:", BitManipulation.getBit(n, k))
print("Set Bit:", BitManipulation.setBit(n, k))
print("Clear Bit:", BitManipulation.clearBit(n, k))
print("Toggle Bit:", BitManipulation.toggleBit(n, k))
print("Power of Two:", BitManipulation.isPowerOfTwo(n))
print("Set Bits Count:", BitManipulation.countSetBits(n))