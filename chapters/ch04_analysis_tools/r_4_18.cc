// Give a big-Oh characterization, in terms of n, of the running time of the
// Ex3 function
//
// Algorithm Ex3(A):
// Input: An array A storing n ≥ 1 integers.
// Output: The sum of the prefix sums in A.
// s ← 0
// for i ← 0 to n−1 do
//   s ← s + A[0]
//   for j ← 1 to i do
//     s ← s + A[j]
// return s
//
// Solution:
// The running time of Algorithm Ex3 is O(n^2).
//
// Step-by-step Analysis:
// 1. Outer Loop: Runs exactly n times (from i = 0 to n-1).
// 2. Work inside Outer Loop for each step i:
//    - 1 addition is always performed: s ← s + A[0]
//    - The inner loop executes i times (from j = 1 to i), performing 1 addition each time.
//    - Total additions for a specific i = 1 + i.
// 3. Grand Total of Additions:
//    We sum the operations for all i from 0 to n-1:
//    Total = (1 + 0) + (1 + 1) + (1 + 2) + ... + (1 + n-1)
//          = 1 + 2 + 3 + ... + n
//          = n * (n + 1) / 2
//          = (n^2 + n) / 2
// 4. Big-Oh characterization:
//    In Big-Oh notation, we drop the lower-order term (n) and the constant multiplier (1/2).
//    This leaves us with O(n^2).

int main() { return 0; }
