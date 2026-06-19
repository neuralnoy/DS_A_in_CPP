// Show that if d(n) is O( f (n)), then ad(n) is O( f (n)), for any constant
// a > 0.
//
// Solution:
// Assume d(n) is O(f(n)).
// Then, by the definition of Big-O, there exist positive constants
// c and n0 such that:
//
//     d(n) <= c * f(n)
//
// for all n >= n0.
//
// Since a > 0 is a constant, multiply both sides by a:
//
//     a * d(n) <= a * c * f(n)
//
// Let c' = a * c. Since a and c are constants, c' is also a constant.
// Therefore,
//
//     a * d(n) <= c' * f(n)
//
// for all n >= n0.
//
// Hence, by the definition of Big-O,
// a * d(n) is O(f(n)).

int main() { return 0; }
