// Give a justification of Proposition:
// The height of a tree is equal to the maximum depth of its external nodes.
//
// Justification:
// 1. The depth of a node v is the number of edges on the path from the root to v.
// 2. The maximum depth among all external nodes is therefore the number of edges on the
//    longest path from the root to any external node.
// 3. The height of a node v is the number of edges on the longest path from v to an
//    external node.
// 4. The height of a tree is defined as the height of its root.
// 5. Therefore, the height of the tree is the number of edges on the longest path from
//    the root to any external node.
// 6. Since (2) and (5) describe the exact same longest path and count the exact same
//    edges, the height of the tree must equal the maximum depth of its external nodes.

int main() { return 0; }
