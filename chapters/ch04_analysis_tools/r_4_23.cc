// Show that if d(n) is O(f(n)) and e(n) is O(g(n)),
// then d(n) + e(n) is O(f(n) + g(n)).
//
// ============================================================================
// THE MENTAL MODEL: THE TWO CEILINGS
// ============================================================================
//
// Think of Big-O as a ceiling or an umbrella.
// - d(n) has its own ceiling: c1 * f(n), which works once you are past n1.
// - e(n) has its own ceiling: c2 * g(n), which works once you are past n2.
//
// When we add the functions, we want a single, unified ceiling for the sum.
// To make this work, we do two things:
// 1. Shift our starting line far enough to the right so BOTH original ceilings
//    are active.
// 2. Choose a giant umbrella constant that is big enough for both.
//
// Visualizing the setup:
//
//  Function 1: d(n) <= c1 * f(n)  for n >= n1
//  ------------------------------------------
//  n-axis:  0 ---- n1 ------------------------->
//                  [--- ceiling active ---]
//
//  Function 2: e(n) <= c2 * g(n)  for n >= n2
//  ------------------------------------------
//  n-axis:  0 ---------- n2 ------------------->
//                        [--- ceiling active ---]
//
//  Combined: Choose n3 = max(n1, n2)
//  ------------------------------------------
//  n-axis:  0 ---------- n3 ------------------->
//                        [--- BOTH active ---]
//
// ============================================================================
// STEP-BY-STEP PROOF
// ============================================================================
//
// 1. STATE ASSUMPTIONS (USING THE DEFINITION OF BIG-O):
//    - Since d(n) is O(f(n)), there exist positive constants c1 and n1 such that:
//      d(n) <= c1 * f(n) for all n >= n1.
//
//    - Since e(n) is O(g(n)), there exist positive constants c2 and n2 such that:
//      e(n) <= c2 * g(n) for all n >= n2.
//
// 2. CHOOSE THE NEW STARTING LINE (n3):
//    We need both assumptions to hold simultaneously. To guarantee this, we
//    choose n3 to be the maximum of the two starting points:
//      n3 = max(n1, n2)
//
//    For any n >= n3, both inequalities are guaranteed to be true.
//
// 3. ADD THE TWO INEQULITIES:
//    For all n >= n3, we can sum the left and right sides:
//      d(n) + e(n) <= c1 * f(n) + c2 * g(n)
//
// 4. CHOOSE THE NEW CEILING CONSTANT (c3):
//    To group f(n) and g(n) under a single coefficient, we choose c3 to be the
//    larger of the two constants:
//      c3 = max(c1, c2)
//
//    Since c3 >= c1 and c3 >= c2, and our functions are positive, we can write:
//      c1 * f(n) <= c3 * f(n)
//      c2 * g(n) <= c3 * g(n)
//
// 5. COMBINE AND CONCLUDE:
//    Substitute these back into our sum inequality:
//      d(n) + e(n) <= c3 * f(n) + c3 * g(n)
//
//    Factor out c3:
//      d(n) + e(n) <= c3 * (f(n) + g(n))
//
//    By choosing c3 = max(c1, c2) and n3 = max(n1, n2), we have shown that
//    there exist positive constants c3 and n3 such that:
//      d(n) + e(n) <= c3 * (f(n) + g(n)) for all n >= n3.
//
//    Therefore, by definition:
//      d(n) + e(n) is O(f(n) + g(n)).

int main() { return 0; }
