// Describe a generalization of the Euler tour traversal of trees such that each
// internal node has three children. Describe how you could use this traversal
// to compute the height of each node in such a tree.
//
// Solution:
// A generalization of the Euler tour for a tree where each internal node
// has three children (left, middle, right) visits each internal node
// exactly 4 times:
// 1. Before exploring the first (left) child.
// 2. After the first child, before the second (middle) child.
// 3. After the second child, before the third (right) child.
// 4. After the third (right) child.
//
// To compute the height of each node, we can calculate it during the
// 4th and final visit. At this point, the entire subtrees of all three
// children have been completely traversed, meaning their heights are
// already known. We calculate the current node's height as:
// 1 + max(height(left), height(middle), height(right)).
// Leaves have a height of 0.

int main() { return 0; }
