// Describe a recursive algorithm for finding the maximum element in an
// array A of n elements. What is your running time and space usage?

// Answer:
//
// Algorithm in Words (Linear Recursion):
// 1. Base Case: If the array has only 1 element (n = 1), then that element must
//    be the maximum. Return A[0]. (If n <= 0, the array is empty and we can throw an exception).
// 2. Recursive Step:
//    - Recursively find the maximum of the first n-1 elements of the array. Let's call this
//    'max_of_rest'.
//    - Compare 'max_of_rest' with the last element of the current array, which is A[n-1].
//    - Return whichever is larger.
//
// Running Time:
// - O(n). We make exactly n-1 recursive calls, and each call performs a constant number of
// operations (O(1)).
//
// Space Usage:
// - O(n). Since each recursive call adds a frame to the system call stack, the stack depth reaches
// n,
//   resulting in O(n) auxiliary space.
//   (Note: A divide-and-conquer binary recursion approach would reduce stack space usage to O(log
//   n)).

#include <iostream>
#include <stdexcept>

int findMax(const int A[], int n) {
    if (n <= 0) {
        throw std::invalid_argument("Array must contain at least one element.");
    }
    // Base Case
    if (n == 1) {
        return A[0];
    }
    // Recursive Step
    int max_of_rest = findMax(A, n - 1);

    if (A[n - 1] > max_of_rest) {
        return A[n - 1];
    } else {
        return max_of_rest;
    }
}

int main() {
    int arr[] = {3, 5, 2, 9, 1, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    try {
        std::cout << "The maximum element is: " << findMax(arr, n) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
