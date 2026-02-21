// Write a short C++ function that counts the number of vowels in a given
// character string.

#include <iostream>
#include <string>

int CountVowels(const std::string &str) {
  int count = 0;
  for (char c : str) {
    char lower = std::tolower(c);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' ||
        lower == 'u') {
      count++;
    }
  }
  return count;
}

int main() {
  std::string text =
      "ThisIsAwordwhichcontainsprobabySeveralvowelsUniqueOrnotWhoknowsWhat";
  int total_vowels = CountVowels(text);
  std::cout << "Total number of vowels: " << total_vowels << "\n";
  return 0;
}
