// Write a short C++ program that takes two arguments of type STL vec-
// tor<double>, a and b, and returns the element-by-element product of a
// and b. That is, it returns a vector c of the same length such that c[i] =
// a[i]·b[i].

#include <cassert>
#include <iostream>
#include <vector>

std::vector<double> ElementWiseProduct(const std::vector<double> &a,
                                       const std::vector<double> &b) {
  assert(a.size() == b.size() && "Vectors must have equal size");

  std::vector<double> c(a.size());
  for (size_t i = 0; i < a.size(); i++) {
    c[i] = a[i] * b[i];
  }
  return c;
}

void PrintVector(const std::vector<double> &v) {
  std::cout << "[ ";
  for (double x : v) {
    std::cout << x << " ";
  }
  std::cout << "]\n";
}

int main() {
  // Example 1: simple positive numbers
  std::vector<double> a1{1.0, 2.0, 3.0};
  std::vector<double> b1{4.0, 5.0, 6.0};
  std::vector<double> c1 = ElementWiseProduct(a1, b1);

  std::cout << "Example 1:\n";
  PrintVector(a1);
  PrintVector(b1);
  std::cout << "Result: ";
  PrintVector(c1);
  std::cout << "\n";

  // Example 2: negatives and decimals
  std::vector<double> a2{-1.5, 0.0, 2.5};
  std::vector<double> b2{2.0, -3.0, 4.0};
  std::vector<double> c2 = ElementWiseProduct(a2, b2);

  std::cout << "Example 2:\n";
  PrintVector(a2);
  PrintVector(b2);
  std::cout << "Result: ";
  PrintVector(c2);
  std::cout << "\n";

  // Example 3: single-element vectors
  std::vector<double> a3{7.0};
  std::vector<double> b3{8.0};
  std::vector<double> c3 = ElementWiseProduct(a3, b3);

  std::cout << "Example 3:\n";
  PrintVector(a3);
  PrintVector(b3);
  std::cout << "Result: ";
  PrintVector(c3);
  std::cout << "\n";

  // Example 4: empty vectors
  std::vector<double> a4{};
  std::vector<double> b4{};
  std::vector<double> c4 = ElementWiseProduct(a4, b4);

  std::cout << "Example 4 (empty vectors):\n";
  PrintVector(c4);

  // Different sizes — will trigger the assertion in debug builds
  std::vector<double> a{1.0, 2.0, 3.0};
  std::vector<double> b{4.0, 5.0};

  std::vector<double> c = ElementWiseProduct(a, b); // assert fails
  return 0;
}
