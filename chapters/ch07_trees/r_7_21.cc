// Let T be the binary tree:
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
//
// a. Give the output of preorderPrint(T,T.root())
//
// void preorderPrint(const Tree& T, const Position& p) {
//     cout << *p;                      // print element
//     PositionList ch = p.children();  // list of children
//     for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//         cout << " ";
//         preorderPrint(T, *q);
//     }
// }
//
// b. Give the output of the function printExpression(T,T.root())
//
// Algorithm printExpression(T, p):
//   if p.isExternal() then
//     print the value stored at p
//   else
//     print “(”
//     printExpression(T, p.left())
//     print the operator stored at p
//     printExpression(T, p.right())
//     print “)”
//
//
// Solution:
//
// a. - / × + 3 1 3 + - 9 5 2 + × 3 - 7 4 6
// b. ((((3+1)×3)/((9-5)+2))-((3×(7-4))+6))
//
int main() { return 0; }
