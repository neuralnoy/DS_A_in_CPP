// Find the value of the arithmetic expression associated with each subtree
// of the following binary tree:
//
//                             [-]
//                   ___________|___________
//                  /                       \
//                 /                         \
//               [/]                         [+]
//            ____|____                   ____|____
//           /         \                 /         \
//         [×]         [+]             [×]         [6]
//        __|__       __|__           __|__
//       /     \     /     \         /     \
//     [+]     [3] [-]     [2]     [3]     [-]
//    _/ \_       _/ \_                   _/ \_
//   /     \     /     \                 /     \
// [3]     [1] [9]     [5]             [7]     [4]
//
// Solution:
//
// here is the mathematical expression which represents the tree:
// ((((3+ 1) ×3)/((9−5) + 2))−((3×(7−4)) + 6))
//
// Starting from left most external nodes:
// a. 3 + 1 = 4
// b. 4 x 3 = 12
// c. 9 - 5 = 4
// d. 4 + 2 = 6
// e. 12 / 6 = 2 (result of the left subtree of the root)
// f. 7 - 4 = 3
// g. 3 x 3 = 9
// h. 9 + 6 = 15 ((result of the right subtree of the root)
// i. 2 - 15 = -13 (end result of the operation of the root of the tree)

int main() { return 0; }
