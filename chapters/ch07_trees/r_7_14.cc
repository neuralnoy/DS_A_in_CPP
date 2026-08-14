// Let T be a tree with n nodes. What is the running time of the function
// parenPrint(T,T.root())?
//
// void parenPrint(const Tree& T, const Position& p) {
//     cout << *p;  // print node’s element
//     if (!p.isExternal()) {
//         PositionList ch = p.children();  // list of children
//         cout << "( ";                    // open
//         for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//             if (q != ch.begin()) cout << " ";  // print separator
//             parenPrint(T, *q);                 // visit the next child
//         }
//         cout << " )";  // close
//     }
// }
//
// Solution:
// O(n)
//
// Explanation:
// The function performs a preorder traversal of the tree.
// It is called exactly once for each of the n nodes in the tree.
// Inside the function, the non-recursive work is proportional to
// the number of children the node has.
// Across all n nodes, the total number of children is n - 1
// (every node except the root is a child of exactly one node).
// Therefore, the total work done is O(n).

int main() { return 0; }
