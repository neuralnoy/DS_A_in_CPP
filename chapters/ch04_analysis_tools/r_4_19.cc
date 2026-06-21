// Give a big-Oh characterization, in terms of n, of the running time of the
// Ex4 function
//
// Algorithm Ex4(A):
// Input: An array A storing n ≥ 1 integers.
// Output: The sum of the prefix sums in A.
// s ← A[0]
// t ← s
// for i ← 1 to n−1 do
//   s ← s + A[i]
//   t ← t + s
// return t
//
// Solution:
// Assuming basic operations like assignment and addition take O(1) time, the
// single loop runs exactly n - 1 times. Thus, the algorithm runs in O(n) time.

int main() { return 0; }
