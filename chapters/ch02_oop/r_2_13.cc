// Give an example of a C++ code fragment that performs an array reference
// that is possibly out of bounds, and if it is out of bounds, the program
// catches that exception and prints an appropriate error message.

#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> arr = {1, 2, 3, 4, 5};

  try {
    // Attempt to access an element beyond the vector's size
    int value = arr.at(10); // Index 10 is out-of-bounds
    std::cout << "Value: " << value << std::endl;
  } catch (const std::out_of_range &e) {
    std::cerr << "Error: Attempted to access out-of-bounds index. " << e.what()
              << std::endl;
  }

  return 0;
}
