// Bill has an algorithm, find2D, to find an element x in an n × n array A.
// The algorithm find2D iterates over the rows of A, and calls the algorithm
// arrayFind, of Code Fragment below, on each row, until x is found or it has
// searched all rows of A. What is the worst-case running time of find2D in
// terms of n? What is the worst-case running time of find2D in terms of N,
// where N is the total size of A? Would it be correct to say that Find2D is a
// linear-time algorithm? Why or why not?
//
// Code Fragment:
//
// Algorithm arrayFind(x,A):
// Input:  An element x and an n-element array, A.
// Output: The index i such that x = A[i] or −1 if no element of A is equal to x.
// i ← 0
// while i < n do
//   if x = A[i] then
//     return i
//   else
//     i ← i + 1
// return −1
//
// Solution:
//
// 1. In terms of n, the worst-case running time of find2D is O(n^2).
//    The algorithm arrayFind takes O(n) time in the worst case to search a row.
//    In the worst case, find2D searches all n rows, resulting in n * n = n^2 operations.
//
// 2. In terms of N, the worst-case running time is O(N).
//    Since the total size of the array is N = n^2, we can substitute N for n^2.
//
// 3. Yes, it is correct to say that find2D is a linear-time algorithm.
//    An algorithm's complexity is defined relative to the total size of its input.
//    Because the worst-case running time is O(N) where N is the total input size,
//    the running time grows proportionally (linearly) with the size of the input.
//
int main() { return 0; }
