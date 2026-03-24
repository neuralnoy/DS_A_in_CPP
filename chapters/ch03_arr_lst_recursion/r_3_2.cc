// Suppose that two entries of an array A are equal to each other. After run-
// ning the insertion-sort algorithm of Code Fragment 3.7, will they appear
// in the same relative order in the final sorted order or in reverse order?
// Explain your answer.

// Answer:
//  In insertion sort, equal elements remain in the same relative order after
//  sorting. This is because the algorithm only shifts elements that are
//  strictly greater than the current element (key). If two elements are equal,
//  no shifting occurs, so the later element is inserted after the earlier one.
//  Therefore, insertion sort is a stable sorting algorithm.

#include <iostream>

void InsertionSort(double *A, int n) {
  for (int i = 1; i < n; i++) {
    double cur = A[i];
    int j = i - 1;

    while (j >= 0 && A[j] > cur) {
      A[j + 1] = A[j];
      j--;
    }

    A[j + 1] = cur;
  }
}

int main() {
  double someArrayOfDoubles[] = {1.0, 5.4, 3.2, 3.2, 5.5, 1000.3, 0.2, 0.0001};

  InsertionSort(someArrayOfDoubles, 8);

  for (double x : someArrayOfDoubles)
    std::cout << x << " ";
}
