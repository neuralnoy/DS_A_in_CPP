// Give a big-Oh characterization, in terms of n, of the running time of the
// Ex5 function
//
// Algorithm Ex5(A,B):
// Input: Arrays A and B each storing n ≥1 integers.
// Output: The number of elements in B equal to the sum of prefix sums in A.
// c ← 0
// for i ← 0 to n−1 do
//   s ← 0
//   for j ← 0 to n−1 do
//     s ← s + A[0]
//     for k ← 1 to j do
//       s ← s + A[k]
//   if B[i] = s then
//     c ← c + 1
// return c
//
// Solution:
// The algorithm has three nested loops, each running at most n times.
// Since all other operations are primitive and execute in O(1) time,
// the overall worst-case running time of the algorithm is O(n^3).
//
int main() { return 0; }
