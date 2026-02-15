// Write an efficient C++ function that takes any integer value i and returns
// 2^i, as a long value. Your function should not multiply 2 by itself i times;
// there are much faster ways of computing 2^i.
#include <iostream>
#include <stdexcept>

long long TwoToThePowerOfInput(int input) {
  if (input < 0 || input >= 64) { // 64-bit max for unsigned long long
    throw std::out_of_range("Input must be in range 0..63");
  }
  return 1ULL << input; // safe bit-shift, returns unsigned long long
}

int main() {
  try {
    std::cout << "2^0 = " << TwoToThePowerOfInput(0) << "\n";
    std::cout << "2^30 = " << TwoToThePowerOfInput(30) << "\n";
    std::cout << "2^63 = " << TwoToThePowerOfInput(63) << "\n";

    // This will throw
    std::cout << "2^64 = " << TwoToThePowerOfInput(64) << "\n";
  } catch (const std::out_of_range &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }

  return 0;
}
