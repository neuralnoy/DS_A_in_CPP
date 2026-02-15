// Write a short C++ program that takes all the lines input to standard input
// and writes them to standard output in reverse order. That is, each line is
// output in the correct order, but the ordering of the lines is reversed.

#include <iostream>
#include <string>
#include <vector>

void PrintVectorText(const std::vector<std::string> &vec) {
  for (const std::string &text : vec) {
    std::cout << text << "\n";
  }
}

void PrintVectorTextReverse(const std::vector<std::string> &vec) {
  for (std::size_t i = vec.size(); i > 0; --i) {
    std::cout << vec[i - 1] << "\n";
  }
}

int main() {
  std::cout << "Enter text lines (Ctrl+D / EOF to finish input):\n";

  std::vector<std::string> storage_vector;
  std::string line;
  while (std::getline(std::cin, line)) {
    storage_vector.push_back(line);
  }

  std::cout << "\nYou entered the following text:\n";
  PrintVectorText(storage_vector);

  std::cout << "\nText in reverse order:\n";
  PrintVectorTextReverse(storage_vector);
}
