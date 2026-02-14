// Write a C++ function that takes an array containing the set of all integers
// in the range 1 to 52 and shuffles it into random order. Use the built-in
// function rand, which returns a pseudo-random integer each time it is
// called. Your function should output each possible order with equal
// probability.

#include <array>
#include <cstdlib>
#include <iostream>

std::array<int, 52> ShuffleOrder(std::array<int, 52> arr) {
  for (int i = 0; i < 52; i++) {
    // Pick a random index from i to 51 (inclusive)
    int random_index = i + (std::rand() % (52 - i));
    // Swap arr[i] with arr[random_index]
    int temp_val = arr[i];
    arr[i] = arr[random_index];
    arr[random_index] = temp_val;
  }
  return arr;
}

// Helper to print an array
void PrintArray(const std::array<int, 52> &arr) {
  for (int i = 0; i < 52; i++) {
    std::cout << arr[i] << " ";
    if ((i + 1) % 13 == 0)
      std::cout << "\n"; // print 13 numbers per line
  }
  std::cout << "\n";
}

int main() {
  // Initialize array 1..52
  std::array<int, 52> deck;
  for (int i = 0; i < 52; i++)
    deck[i] = i + 1;

  std::cout << "Original deck:\n";
  PrintArray(deck);

  // Shuffle 1
  auto shuffled1 = ShuffleOrder(deck);
  std::cout << "\nShuffled deck 1:\n";
  PrintArray(shuffled1);

  // Shuffle 2
  auto shuffled2 = ShuffleOrder(deck);
  std::cout << "\nShuffled deck 2:\n";
  PrintArray(shuffled2);

  return 0;
}
