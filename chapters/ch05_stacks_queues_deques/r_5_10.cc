// Describe the output for the following sequence of deque operations:
// insertFront(3),
// insertBack(8),
// insertBack(9),
// insertFront(5),
// removeFront(),
// eraseBack(),
// first(),
// insertBack(7),
// removeFront(),
// last(),
// eraseBack().
//
// Solution:
//
// insertFront(3) -> (3)
// insertBack(8) -> (3, 8)
// insertBack(9) -> (3, 8, 9)
// insertFront(5) -> (5, 3, 8, 9)
// removeFront() -> (3, 8, 9)
// eraseBack() -> (3, 8)
// first() -> (3, 8) return 3
// insertBack(7) -> (3, 8, 7)
// removeFront() -> (8, 7)
// last() -> (8, 7) return 7
// eraseBack() -> (8)
//
// So, the output is 3, 7 and a deque is left with one element 8 in it.
//
// Visual trace:
//
//  Front                           Back
//   |                              |
//   v                              v
// [   ]                            (Initial empty state)
// [ 3 ]                            after insertFront(3)
// [ 3 | 8 ]                        after insertBack(8)
// [ 3 | 8 | 9 ]                    after insertBack(9)
// [ 5 | 3 | 8 | 9 ]                after insertFront(5)
// [ 3 | 8 | 9 ]                    after removeFront()
// [ 3 | 8 ]                        after eraseBack()
// [ 3 | 8 ]         -> returns 3   after first()
// [ 3 | 8 | 7 ]                    after insertBack(7)
// [ 8 | 7 ]                        after removeFront()
// [ 8 | 7 ]         -> returns 7   after last()
// [ 8 ]                            after eraseBack()

int main() { return 0; }
