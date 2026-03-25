// Give a C++ code fragment that, given a n × n matrix M of type float,
// replaces M with its transpose. Try to do this without the use of a temporary
// matrix.

#include <iostream>

void transpose(float *matrix, int N) {
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      float tmp = matrix[i * N + j];
      matrix[i * N + j] = matrix[j * N + i];
      matrix[j * N + i] = tmp;
    }
  }
}

void printMatrix(const float *mat, int N) {
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j)
      std::cout << mat[i * N + j] << " ";
    std::cout << "\n";
  }
}

int main() {
  const int N = 3;

  float mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  std::cout << "Original:\n";
  printMatrix(&mat[0][0], N);

  transpose(&mat[0][0], N);

  std::cout << "\nTransposed:\n";
  printMatrix(&mat[0][0], N);

  return 0;
}
