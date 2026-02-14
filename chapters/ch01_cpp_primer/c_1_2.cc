// Write a short C++ function that takes an array of int values and determines
// if there is a pair of numbers in the array whose product is even.

#include <iostream>

bool HasEvenProductPair(const int arr[], int size) {
  if (size < 2)
    return false;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      return true; // found a number that will make product even
    }
  }
  return false; // no even number found
}

int main() {
  // Test 1: array with both odd and even numbers
  int arr1[] = {1, 3, 4, 7};
  std::cout << "Test 1: " << HasEvenProductPair(arr1, 4)
            << "\n"; // Expected: 1 (true)

  // Test 2: array with all odd numbers
  int arr2[] = {1, 3, 5, 7};
  std::cout << "Test 2: " << HasEvenProductPair(arr2, 4)
            << "\n"; // Expected: 0 (false)

  // Test 3: array with zeros
  int arr3[] = {0, 1, 3};
  std::cout << "Test 3: " << HasEvenProductPair(arr3, 3)
            << "\n"; // Expected: 1 (true)

  // Test 4: array with only one element
  int arr4[] = {2};
  std::cout << "Test 4: " << HasEvenProductPair(arr4, 1)
            << "\n"; // Expected: 0 (false)

  // Test 5: array with all even numbers
  int arr5[] = {2, 4, 6};
  std::cout << "Test 5: " << HasEvenProductPair(arr5, 3)
            << "\n"; // Expected: 1 (true)

  // Test 6: empty array
  int arr6[] = {};
  std::cout << "Test 6: " << HasEvenProductPair(arr6, 0)
            << "\n"; // Expected: 0 (false)

  return 0;
}
