/*Write a short C++ function, isMultiple, that takes two long values, n and
m, and returns true if and only if n is a multiple of m, that is, n = m·i for
some integer i.*/

#include <iostream>

bool isMultiple(long n, long m) { return m != 0 && n % m == 0; }

int main() {
  // Test cases: positive, negative, zero
  struct TestCase {
    long n;
    long m;
  };

  TestCase tests[] = {{1000, 500}, {1000, 33}, {0, 5},    {5, 0}, // edge case
                      {-12, 3},    {12, -3},   {-12, -3}, {7, 1}, {1, 7}};

  for (const auto &t : tests) {
    std::cout << t.n << " is " << (isMultiple(t.n, t.m) ? "" : "not ")
              << "a multiple of " << t.m << "\n";
  }
}
