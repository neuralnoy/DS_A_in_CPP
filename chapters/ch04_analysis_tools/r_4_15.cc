// Show that if d(n) is O( f (n)) and e(n) is O(g(n)), then the product d(n)e(n)
// is O( f (n)g(n)).
//
// Solution:
// By the definition of Big-O notation:
// 1. d(n) is O(f(n)) implies that there exist positive constants c1 and n1
//    such that:
//    |d(n)| <= c1 * |f(n)| for all n >= n1
//
// 2. e(n) is O(g(n)) implies that there exist positive constants c2 and n2
//    such that:
//    |e(n)| <= c2 * |g(n)| for all n >= n2
//
// To show that d(n)e(n) is O(f(n)g(n)), we need to find positive constants c
// and n0 such that:
//    |d(n)e(n)| <= c * |f(n)g(n)| for all n >= n0
//
// Let us choose:
//    c = c1 * c2
//    n0 = max(n1, n2)
//
// For any n >= n0:
// Since n >= n1, we have |d(n)| <= c1 * |f(n)|
// Since n >= n2, we have |e(n)| <= c2 * |g(n)|
//
// Since absolute values and the constants c1, c2 are positive, we can multiply
// the two inequalities:
//    |d(n)e(n)| = |d(n)| * |e(n)|
//               <= (c1 * |f(n)|) * (c2 * |g(n)|)
//               = (c1 * c2) * |f(n)g(n)|
//               = c * |f(n)g(n)|
//
// Since c = c1 * c2 and n0 = max(n1, n2) are both well-defined positive constants,
// the inequality |d(n)e(n)| <= c * |f(n)g(n)| holds for all n >= n0.
//
// Therefore, the product d(n)e(n) is indeed O(f(n)g(n)).
//

int main() { return 0; }
