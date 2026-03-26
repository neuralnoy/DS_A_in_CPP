// Describe a way to use recursion to compute the sum of all the elements in
// a n × n (two-dimensional) array of integers.

// Recursive function to sum all elements of an n × n integer array
// Approach 1: flatten the 2D array to 1D in memory (or treat it as contiguous)
// Base case: if index == 0, return array[0]
// Recursive case: return array[index] + sum(array, index - 1)
//
// Example in words:
// int sum(int* arr, int idx) {
//     if (idx == 0) return arr[0];
//     return arr[idx] + sum(arr, idx - 1);
// }
//
// Approach 2: use row and column indices without flattening
// Base case: if row == 0 && col == 0, return array[0][0]
// Recursive case:
//   if col > 0: sum = array[row][col] + sum(row, col-1)
//   else:      sum = array[row][col] + sum(row-1, n-1)
//
// This recursively sums all elements of the 2D array.

#include <iostream>
using namespace std;

// Recursive function to sum all elements of an n × n array using row and column
// indices
int sum2D(int **matrix, int row, int col, int n) {
  // Base case: first element
  if (row == 0 && col == 0) {
    return matrix[0][0];
  }

  // Recursive case
  if (col > 0) {
    return matrix[row][col] + sum2D(matrix, row, col - 1, n);
  } else {
    return matrix[row][col] + sum2D(matrix, row - 1, n - 1, n);
  }
}

int main() {
  int n = 3;

  // Allocate 2D array dynamically
  int **matrix = new int *[n];
  matrix[0] = new int[n]{1, 2, 3};
  matrix[1] = new int[n]{4, 5, 6};
  matrix[2] = new int[n]{7, 8, 9};
  for (int i = 1; i < n; i++) {
    // Copy initialization values for simplicity
    // In practice, fill each row as needed
  }

  cout << "Sum of elements: " << sum2D(matrix, n - 1, n - 1, n) << endl;

  // Clean up
  for (int i = 0; i < n; i++)
    delete[] matrix[i];
  delete[] matrix;

  return 0;
}
