// R-7.1 Describe an algorithm for counting the number of left external nodes in a
// binary tree, using the Binary tree ADT.
//
// ALGORITHM: CountLeftExternals(v, is_left)
//
// 1. If isExternal(v):
//      If is_left == true, return 1
//      Else, return 0
//
// 2. count = 0
// 3. If hasLeft(v):
//      count = count + CountLeftExternals(left(v), true)
// 4. If hasRight(v):
//      count = count + CountLeftExternals(right(v), false)
//
// 5. return count
//
// Initial call for the whole tree: CountLeftExternals(root(), false)
//
// MENTAL MODEL:
// Pass a boolean flag down every branch. Left branches get 'true', right branches get 'false'.
// When you hit a dead end (external node/leaf), check the flag. If true, count it.
//
// VISUALIZATION:
//         (root)
//          /  \
//    true /    \ false
//        /      \
//      (A)      (B)
//      / \        \
// true/   \false   \ false
//    /     \        \
//  [X]     [ ]      [ ]
//
// [X] isExternal == true AND is_left == true   -> returns 1
// [ ] isExternal == true AND is_left == false  -> returns 0
//
// RECURSION STACK TRACE:
// Example 3-level tree:
//          (R)
//         /   \
//       (A)   (B)
//       / \   /
//     (C) (D)(E)
//
// C = Left External (1)
// D = Right External (0)
// E = Left External (1)
//
// Stack grows down, collapses up.
//
// |-------------------------------------------|
// | CLE(R, false)                             | <- Frame 1 (Root)
// |   call CLE(A, true)                       |
// |-------------------------------------------|
//     | CLE(A, true)                          | <- Frame 2
//     |   call CLE(C, true)                   |
//     |---------------------------------------|
//         | CLE(C, true)                      | <- Frame 3
//         |   External! is_left=T -> return 1 |
//         |-----------------------------------|
//     |   call CLE(D, false)                  |
//     |---------------------------------------|
//         | CLE(D, false)                     | <- Frame 3
//         |   External! is_left=F -> return 0 |
//         |-----------------------------------|
//     | return 1 + 0 = 1                      |
//     |---------------------------------------|
// |   call CLE(B, false)                      |
// |-------------------------------------------|
//     | CLE(B, false)                         | <- Frame 2
//     |   call CLE(E, true)                   |
//     |---------------------------------------|
//         | CLE(E, true)                      | <- Frame 3
//         |   External! is_left=T -> return 1 |
//         |-----------------------------------|
//     | return 1 + 0 = 1                      |
//     |---------------------------------------|
// | return 1 + 1 = 2                          |
// |-------------------------------------------|

// dummy main function
int main() { return 0; }
