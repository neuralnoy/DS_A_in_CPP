/* Write a short C++ function that takes an integer n and returns the sum of
all the odd integers smaller than n. */

#include <iostream>

long long sumOfOddIntegers(int n) {
  if (n <= 0) {
    return 0;
  }

  long long sum{0};
  for (int i = 1; i < n; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  int test_integer0 = 0;
  int test_integer1 = 10;
  int test_integer2 = 200;
  int test_integer3 = 3000;
  int test_integer4 = 40000000;
  int test_integer5 = -10;

  std::cout << "Sum of all odd numbers smaller than " << test_integer0
            << " is equal to " << sumOfOddIntegers(test_integer0) << "\n";
  std::cout << "Sum of all odd numbers smaller than " << test_integer1
            << " is equal to " << sumOfOddIntegers(test_integer1) << "\n";
  std::cout << "Sum of all odd numbers smaller than " << test_integer2
            << " is equal to " << sumOfOddIntegers(test_integer2) << "\n";
  std::cout << "Sum of all odd numbers smaller than " << test_integer3
            << " is equal to " << sumOfOddIntegers(test_integer3) << "\n";
  std::cout << "Sum of all odd numbers smaller than " << test_integer4
            << " is equal to " << sumOfOddIntegers(test_integer4) << "\n";
  std::cout << "Sum of all odd numbers smaller than " << test_integer5
            << " is equal to " << sumOfOddIntegers(test_integer5) << "\n";
  return 0;
}
