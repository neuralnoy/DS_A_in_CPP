// Give a big-Oh characterization, in terms of n, of the running time of the
// Ex1 function
//
// Algorithm Ex1(A):
// Input: An array A storing n ≥ 1 integers.
// Output: The sum of the elements in A.
// s ← A[0]
// for i ← 1 to n−1 do
// s ← s + A[i]
// return s
//
// Solution:
// Assuming accessing an element is O(1).
// Assuming addition and assignment operations are O(1).
// The algorithm performs these operations (n-1) times,
// plus initial access and assignment, so this algorithm's time complexity
// is O(n).

#include <cassert>
#include <iostream>
#include <vector>

int ex1(const std::vector<int>& A) {
    auto s = A[0];
    for (std::size_t i = 1; i < A.size(); i++) {
        s += A[i];
    }
    return s;
}

int main() {
    // Test Case 1: Standard positive integers
    std::vector<int> A1 = {1, 2, 3, 4, 5};
    int sum1 = ex1(A1);
    std::cout << "Test Case 1 (Positive values 1..5): "
              << "Expected = 15, Got = " << sum1 << "\n";
    assert(sum1 == 15);

    // Test Case 2: Mixed positive and negative integers
    std::vector<int> A2 = {10, -3, 5, -8, 2};
    int sum2 = ex1(A2);
    std::cout << "Test Case 2 (Mixed values): "
              << "Expected = 6, Got = " << sum2 << "\n";
    assert(sum2 == 6);

    // Test Case 3: Single element array (boundary condition, n = 1)
    std::vector<int> A3 = {99};
    int sum3 = ex1(A3);
    std::cout << "Test Case 3 (Single-element): "
              << "Expected = 99, Got = " << sum3 << "\n";
    assert(sum3 == 99);

    std::cout << "\nAll test cases passed successfully!\n";
    return 0;
}
