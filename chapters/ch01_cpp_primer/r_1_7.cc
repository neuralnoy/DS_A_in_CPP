// R-1.7 Write a short C++ function that takes an integer n and returns the sum
// of all the integers smaller than n.

#include <iostream>

int LoopSumOfIntegersSmallerThanN(const int &n) {
  if (n <= 1)
    return 0; // no positive integers smaller than 1
  int sum = 0;
  for (int i = 1; i < n; i++) {
    sum += i;
  }
  return sum;
}

int FormulaSumOfIntegersSmallerThanN(const int &n) {
  if (n <= 1)
    return 0;
  return ((n - 1) * n) / 2;
}

int main() {
  std::cout << "loop sum of n = 5 is: " << LoopSumOfIntegersSmallerThanN(5)
            << std::endl;
  std::cout << "loop sum of n = 10 is: " << LoopSumOfIntegersSmallerThanN(10)
            << std::endl;
  std::cout << "loop sum of n = 20 is: " << LoopSumOfIntegersSmallerThanN(20)
            << std::endl;
  std::cout << "loop sum of n = 50 is: " << LoopSumOfIntegersSmallerThanN(50)
            << std::endl;
  std::cout << "loop sum of n = 100 is: " << LoopSumOfIntegersSmallerThanN(100)
            << std::endl;
  std::cout << "loop sum of n = -100 is: "
            << LoopSumOfIntegersSmallerThanN(-100) << std::endl;

  std::cout << "formula sum of n = 5 is: "
            << FormulaSumOfIntegersSmallerThanN(5) << std::endl;
  std::cout << "formula sum of n = 10 is: "
            << FormulaSumOfIntegersSmallerThanN(10) << std::endl;
  std::cout << "formula sum of n = 20 is: "
            << FormulaSumOfIntegersSmallerThanN(20) << std::endl;
  std::cout << "formula sum of n = 50 is: "
            << FormulaSumOfIntegersSmallerThanN(50) << std::endl;
  std::cout << "formula sum of n = 100 is: "
            << FormulaSumOfIntegersSmallerThanN(100) << std::endl;
  std::cout << "formula sum of n = -100 is: "
            << FormulaSumOfIntegersSmallerThanN(-100) << std::endl;
}
