// Write a short C++ program that outputs all possible strings formed by
// using each of the characters ’a’, ’b’, ’c’, ’d’, ’e’, and ’f’ exactly once.

#include <iostream>

void Swap(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
}

// This is the version with recursion
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

// This function prints all permutations of exactly 6 characters.
// It uses six nested loops, where each loop chooses one position
// in the output string.
void PrintPermutations(const char letters[6]) {
  // First position in the permutation
  for (int i = 0; i < 6; ++i) {

    // Second position
    for (int j = 0; j < 6; ++j) {
      // Skip if the index was already used
      if (j == i)
        continue;

      // Third position
      for (int k = 0; k < 6; ++k) {
        // Ensure all indices are unique so far
        if (k == i || k == j)
          continue;

        // Fourth position
        for (int l = 0; l < 6; ++l) {
          if (l == i || l == j || l == k)
            continue;

          // Fifth position
          for (int m = 0; m < 6; ++m) {
            if (m == i || m == j || m == k || m == l)
              continue;

            // Sixth (last) position
            for (int n = 0; n < 6; ++n) {
              if (n == i || n == j || n == k || n == l || n == m)
                continue;

              // At this point, all indices are different.
              // We now have a valid permutation.
              std::cout << letters[i] << letters[j] << letters[k] << letters[l]
                        << letters[m] << letters[n] << '\n';
            }
          }
        }
      }
    }
  }
}

int main() {
  // Initial set of characters
  const char letters[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

  // Call the function to print all permutations with the loop
  std::cout << "Running the loop version:\n";
  PrintPermutations(letters);
  std::cout << "End of the loop version.\n";

  char letters_recursive[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  std::cout << "Running the recursive version:\n";
  Permute(letters_recursive, 0, 5);
  std::cout << "End of the recusrive version.";

  return 0;
}
