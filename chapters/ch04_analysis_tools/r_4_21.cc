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
// Input: An element x and an n-element array, A.
// Output: The index i such that x = A[i] or−1 if no element of A is equal to x.
// i ←0
// while i < n do
//   if x = A[i] then
//     return i
//   else
//     i ←i + 1
// return −1
//
int main() { return 0; }
