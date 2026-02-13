/* Write a short C++ function, isTwoPower, that takes an int i and returns
true if and only if i is a power of 2. Do not use multiplication or division,
however. */

// A number i > 0 is a power of two if and only if it has exactly one bit set in
// its binary representation.
// Example:
// 1 → 0001 → power of 2
// 2 → 0010 → power of 2
// 4 → 0100 → power of 2
// 8 → 1000 → power of 2

#include <iostream>

bool isTwoPower(int i) { return i > 0 && (i & (i - 1)) == 0; }

int main() {
  int testValues[] = {0, 1, 2, 3, 4, 5, 8, 16, 31, 32, 33, 64, 127, 128};

  for (int val : testValues) {
    std::cout << val << " is "
              << (isTwoPower(val) ? "a power of 2" : "not a power of 2")
              << "\n";
  }

  return 0;
}
