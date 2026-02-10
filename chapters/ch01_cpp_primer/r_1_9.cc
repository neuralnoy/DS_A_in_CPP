// Write a C++ function printArray(A, m, n) that prints an m×n two-dimensional
// array A of integers, declared to be “int** A,” to the standard output.
// Each of the m rows should appear on a separate line.

#include <iostream>

void PrintArray(int **A, int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << A[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int m = 2, n = 3;

  int **some_2d_array = new int *[m];
  for (int i = 0; i < m; ++i) {
    some_2d_array[i] = new int[n];
  }

  some_2d_array[0][0] = 1;
  some_2d_array[0][1] = 2;
  some_2d_array[0][2] = 3;
  some_2d_array[1][0] = 4;
  some_2d_array[1][1] = 5;
  some_2d_array[1][2] = 6;

  PrintArray(some_2d_array, m, n);

  for (int i = 0; i < m; ++i) {
    delete[] some_2d_array[i];
  }
  delete[] some_2d_array;
}
