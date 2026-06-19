// What is the sum of all the even numbers from 0 to 2n, for any positive
// integer n?
//
// Solution:
// The even numbers from 0 to 2n are: 0, 2, 4, 6, ..., 2n.
// This is an arithmetic progression with first term a = 0 (or a = 2, since 0 doesn't affect the
// sum), common difference d = 2, and the number of non-zero terms is n.
//
// We can factor out a 2 from each term of the sum:
// Sum = 0 + 2 + 4 + 6 + ... + 2n
//     = 2 * (0 + 1 + 2 + 3 + ... + n)
//
// Using the formula for the sum of the first n positive integers, which is n * (n + 1) / 2:
// Sum = 2 * [n * (n + 1) / 2]
//     = n * (n + 1)
//     = n^2 + n
//
// Therefore, the sum is n(n + 1) (or n^2 + n).

int main() { return 0; }
