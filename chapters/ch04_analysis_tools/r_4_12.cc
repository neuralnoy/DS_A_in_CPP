// Show that the following two statements are equivalent:
// (a) The running time of algorithm A is always O( f (n)).
// (b) In the worst case, the running time of algorithm A is O( f (n)).
//
// Proof of Equivalence:
// Let T(I) be the running time of algorithm A on an input I, and let n = |I| be the input size.
// Let T_worst(n) = max { T(I) : |I| = n } be the worst-case running time of algorithm A for inputs
// of size n.
//
// 1. Proof that (a) implies (b):
//    - Suppose (a) holds: the running time is always O(f(n)).
//      By definition of Big-O, there exist constants c > 0 and n_0 >= 1 such that
//      for all inputs I with size n >= n_0:
//          T(I) <= c * f(n)
//    - Since the worst-case running time T_worst(n) is the maximum running time over all inputs of
//    size n,
//      and every individual input I of size n >= n_0 is bounded by c * f(n), the maximum must also
//      be bounded:
//          T_worst(n) = max { T(I) : |I| = n } <= c * f(n) for all n >= n_0.
//    - This satisfies the definition of Big-O, meaning T_worst(n) is O(f(n)). Thus, (b) holds.
//
// 2. Proof that (b) implies (a):
//    - Suppose (b) holds: in the worst case, the running time is O(f(n)).
//      This means T_worst(n) is O(f(n)). By definition of Big-O, there exist constants c > 0 and
//      n_0 >= 1 such that for all n >= n_0:
//          T_worst(n) <= c * f(n)
//    - For any individual input I of size n, the running time T(I) cannot exceed the worst-case
//    running time
//      for inputs of that size:
//          T(I) <= T_worst(n)
//    - Combining these inequalities, for all n >= n_0 and any input I of size n:
//          T(I) <= T_worst(n) <= c * f(n)
//    - This satisfies the definition of Big-O, meaning the running time is always O(f(n)). Thus,
//    (a) holds.
//
// Since (a) implies (b) and (b) implies (a), the two statements are equivalent.
//

int main() { return 0; }
