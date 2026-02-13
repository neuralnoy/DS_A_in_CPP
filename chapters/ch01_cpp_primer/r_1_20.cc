/* Write a short C++ function that takes an integer n and returns the sum of
all the integers smaller than n. */

#include <iostream>

long long sumOfAllIntegersSmallerThanN(int n) {
  if (n <= 0) {
    return 0;
  }
  return static_cast<long long>(n) * (n - 1) / 2;
}

int main() {

  int test_integer0 = 0;
  int test_integer1 = 10;
  int test_integer2 = 200;
  int test_integer3 = 3000;
  int test_integer4 = 40000000;
  int test_integer5 = -10;

  std::cout << "Sum of all numbers smaller than " << test_integer0
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer0)
            << "\n";
  std::cout << "Sum of all numbers smaller than " << test_integer1
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer1)
            << "\n";
  std::cout << "Sum of all numbers smaller than " << test_integer2
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer2)
            << "\n";
  std::cout << "Sum of all numbers smaller than " << test_integer3
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer3)
            << "\n";
  std::cout << "Sum of all numbers smaller than " << test_integer4
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer4)
            << "\n";
  std::cout << "Sum of all numbers smaller than " << test_integer5
            << " is equal to " << sumOfAllIntegersSmallerThanN(test_integer5)
            << "\n";
}
