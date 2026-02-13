/* Write a short C++ function that takes a positive double value x and returns
the number of times we can divide x by 2 before we get a number less
than 2. */

#include <cmath>
#include <iostream>

int CountDivisions(double x) {
  return (x < 2.0) ? 0 : static_cast<int>(std::log2(x));
}

int main() {
  double num1{10};
  double num2{51};
  double num3{112};

  std::cout << "We can divide " << num1 << " by 2 " << CountDivisions(num1)
            << " times.\n";
  std::cout << "We can divide " << num2 << " by 2 " << CountDivisions(num2)
            << " times.\n";
  std::cout << "We can divide " << num3 << " by 2 " << CountDivisions(num3)
            << " times.\n";
  return 0;
}
