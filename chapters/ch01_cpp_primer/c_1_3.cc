// Write a C++ function that takes an STL vector of int values and determines
// if all the numbers are different from each other (that is, they are distinct)

#include <iostream>
#include <vector>

// Assuming using a set or any other container is not allowed
bool ContainsDistinctValues(const std::vector<int>& vec) {
  const std::size_t kSize = vec.size();

  for (std::size_t i = 0; i < kSize; ++i) {
    for (std::size_t j = i + 1; j < kSize; ++j) {
      if (vec[i] == vec[j]) {
        return false;  // duplicate found
      }
    }
  }
  return true;  // all values are distinct
}

int main() {
  std::vector<int> test_vector_distinct{1, 2, 3, 4, 5};
  std::vector<int> test_vector_not_distinct{1, 2, 3, 4, 5, 5};

  std::cout << "Distinct vector check: "
            << ContainsDistinctValues(test_vector_distinct) << "\n";

  std::cout << "Non-distinct vector check: "
            << ContainsDistinctValues(test_vector_not_distinct) << "\n";

  return 0;
}
