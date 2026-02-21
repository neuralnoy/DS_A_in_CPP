// Write a short program that takes as input three integers, a, b, and c, and
// determines if they can be used in a correct arithmetic formula (in the given
// order), like “a + b = c,” “a = b − c,” or “a ∗ b = c.”

#include <iostream>

bool CorrectArithmeticFormula(int a, int b, int c) {
  // Addition
  if (a + b == c) return true;

  // Subtraction
  if (a - b == c) return true;
  if (a == b - c) return true;

  // Multiplication
  if (a * b == c) return true;

  // Division (must be exact and avoid division by zero)
  if (b != 0 && a % b == 0 && a / b == c) return true;
  if (c != 0 && b % c == 0 && a == b / c) return true;

  return false;
}

int main() {
  std::cout << CorrectArithmeticFormula(1, 2, 3) << "\n";  // 1 (true)
  std::cout << CorrectArithmeticFormula(2, 3, 6) << "\n";  // 1 (true)
  std::cout << CorrectArithmeticFormula(10, 5, 2) << "\n"; // 1 (true)
  std::cout << CorrectArithmeticFormula(3, 2, 1) << "\n";  // 1 (true)
  std::cout << CorrectArithmeticFormula(5, 2, 4) << "\n";  // 0 (false)
  return 0;
}
