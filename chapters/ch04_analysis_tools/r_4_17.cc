// Give a big-Oh characterization, in terms of n, of the running time of the
// Ex2 function
//
// Algorithm Ex2(A):
// Input: An array A storing n ≥ 1 integers.
// Output: The sum of the elements at even cells in A.
// s ← A[0]
// for i ← 2 to n−1 by increments of 2 do
// s ← s + A[i]
// return s
//
// Solution:
// Assuming that accessing an array element takes O(1) time,
// and that addition and assignment are also O(1) operations,
// the loop will perform approximately n/2 constant-time operations.
// Therefore, the overall running time of the algorithm is O(n).

int main() { return 0; }
