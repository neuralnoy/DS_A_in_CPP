// Write a pseudo-code description of a method that reverses an array of n
// integers, so that the numbers are listed in the opposite order than they were
// before, and compare this method to an equivalent C++ method for doing
// the same thing.
//
// Pseudo-code:
//
// size <- length of array
// create new_array of size n
//
// for index from 0 to size − 1:
//     new_array[size − 1 − index] <- array[index]
//
// return new_array

#include <iostream>
#include <vector>

std::vector<int> ReverseArray(const std::vector<int> &array) {
  std::vector<int> result(array.size());

  for (size_t i = 0; i < array.size(); ++i) {
    result[array.size() - 1 - i] = array[i];
  }

  return result;
}

void PrintVector(const std::vector<int> &v) {
  std::cout << "{ ";
  for (int x : v) {
    std::cout << x << " ";
  }
  std::cout << "}\n";
}

int main() {
  // Example 1: normal array
  std::vector<int> a1{1, 2, 3, 4, 5};
  std::vector<int> r1 = ReverseArray(a1);

  std::cout << "Original: ";
  PrintVector(a1);
  std::cout << "Reversed: ";
  PrintVector(r1);

  // Example 2: single element
  std::vector<int> a2{42};
  std::vector<int> r2 = ReverseArray(a2);

  std::cout << "\nOriginal: ";
  PrintVector(a2);
  std::cout << "Reversed: ";
  PrintVector(r2);

  // Example 3: empty array
  std::vector<int> a3{};
  std::vector<int> r3 = ReverseArray(a3);

  std::cout << "\nOriginal: ";
  PrintVector(a3);
  std::cout << "Reversed: ";
  PrintVector(r3);

  // Example 4: negative numbers
  std::vector<int> a4{-3, -1, -7, 0, 9};
  std::vector<int> r4 = ReverseArray(a4);

  std::cout << "\nOriginal: ";
  PrintVector(a4);
  std::cout << "Reversed: ";
  PrintVector(r4);

  return 0;
}
