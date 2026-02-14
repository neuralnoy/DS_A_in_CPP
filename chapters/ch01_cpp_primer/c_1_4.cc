// Write a C++ function that takes an STL vector of int values and prints all
// the odd values in the vector.

#include <iostream>
#include <vector>

void PrintAllOddValues(const std::vector<int> &vec) {
  const size_t size = vec.size();
  for (size_t i = 0; i < size; i++) {
    if (vec[i] % 2 == 0) {
      continue;
    }
    std::cout << "Found an odd number: " << vec[i] << "\n";
  }
}

int main() {
  std::vector<int> example1{1, 2, 3, 4, 5};
  std::vector<int> example2{10, 20, 30};
  std::vector<int> example3{7, 9, 11};
  std::vector<int> example4{}; // empty vector

  std::cout << "Example 1:\n";
  PrintAllOddValues(example1);

  std::cout << "\nExample 2:\n";
  PrintAllOddValues(example2);

  std::cout << "\nExample 3:\n";
  PrintAllOddValues(example3);

  std::cout << "\nExample 4 (empty vector):\n";
  PrintAllOddValues(example4);

  return 0;
}
