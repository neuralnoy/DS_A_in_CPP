// Write a short C++ function that removes all the punctuation from a string s
// storing a sentence. For example, this operation would transform the string
// "Let’s try, Mike."to "Lets try Mike".

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

void RemovePunctuation(std::string &s) {
  s.erase(std::remove_if(s.begin(), s.end(),
                         [](unsigned char c) {
                           return !std::isalpha(c) && !std::isspace(c);
                         }),
          s.end());
}

int main() {
  std::string test1 = "Let’s try, Mike.";
  std::string test2 = "Hello, world! How's it going?";
  std::string test3 = "No punctuation here";
  std::string test4 = "C++ > C? Yes!";

  RemovePunctuation(test1);
  RemovePunctuation(test2);
  RemovePunctuation(test3);
  RemovePunctuation(test4);

  std::cout << "Test 1: " << test1 << "\n"; // Lets try Mike
  std::cout << "Test 2: " << test2 << "\n"; // Hello world Hows it going
  std::cout << "Test 3: " << test3 << "\n"; // No punctuation here
  std::cout << "Test 4: " << test4 << "\n"; // C C Yes

  return 0;
}
