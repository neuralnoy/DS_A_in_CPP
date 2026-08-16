// Modify the C++ function preorderPrint, given in code fragment below, so
// that it will print the strings associated with the nodes of a tree
// one per line, and indented proportionally to the depth of the node.
//
// void preorderPrint(const Tree& T, const Position& p) {
//     cout << *p;
//     // print element
//     PositionList ch = p.children();
//     // list of children
//     for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//         cout << " ";
//         preorderPrint(T, *q);
//     }
// }

// Solution:

// void preorderPrint(const Tree& T, const Position& p, int depth = 0) {
//     for (int i = 0; i < depth; ++i) {
//         cout << "  ";
//     }
//     cout << *p << '\n';
//
//     PositionList ch = p.children();
//     for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//         preorderPrint(T, *q, depth + 1);
//     }
// }

int main() { return 0; }
