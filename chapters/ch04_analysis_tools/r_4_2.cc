// Give a pseudo-code description of the O(n)-time algorithm for computing
// the power function p(x,n). Also, draw the recursion trace of this algorithm
// for the computation of p(2,5).
//
// Solution:
//
// Algorithm p(x, n):
//     Input: Number x, integer n >= 0
//     Output: The value of x^n
//     if n = 0 then
//         return 1
//     else
//         return x * p(x, n - 1)
//
// Recursion Trace for p(2, 5):
//
//   p(2, 5)
//     |
//     | (calls)
//     v
//     p(2, 4)
//       |
//       | (calls)
//       v
//       p(2, 3)
//         |
//         | (calls)
//         v
//         p(2, 2)
//           |
//           | (calls)
//           v
//           p(2, 1)
//             |
//             | (calls)
//             v
//             p(2, 0) ---------> returns 1
//             |
//           returns 2 * 1 = 2
//           |
//         returns 2 * 2 = 4
//         |
//       returns 2 * 4 = 8
//       |
//     returns 2 * 8 = 16
//     |
//   returns 2 * 16 = 32

int main() { return 0; }
