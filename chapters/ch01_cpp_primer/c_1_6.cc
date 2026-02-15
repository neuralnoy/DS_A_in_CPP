// Write a short C++ program that outputs all possible strings formed by
// using each of the characters ’a’, ’b’, ’c’, ’d’, ’e’, and ’f’ exactly once.

#include <iostream>

#include <iostream>

void Swap(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
}

void Permute(char arr[], int start, int end) {
  if (start == end) {
    for (int i = 0; i <= end; ++i) {
      std::cout << arr[i];
    }
    std::cout << '\n';
    return;
  }

  for (int i = start; i <= end; ++i) {
    Swap(arr[start], arr[i]);     // place a character at current position
    Permute(arr, start + 1, end); // permute the remaining characters
    Swap(arr[start], arr[i]);     // backtrack
  }
}

int main() {
  char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  Permute(letters, 0, 5);
  return 0;
}
