// What are the minimum and maximum number of internal and external
// nodes in an improper binary tree with n nodes?
//
// Solution:
// Let i be the number of internal nodes and e be the number of external nodes.
// Total nodes n = i + e.
// An improper binary tree has at least one node with exactly 1 child.
//
// 1. Minimum external (e) and Maximum internal (i):
// To minimize external nodes, the tree should branch as little as possible.
// A straight-line tree (where every internal node has 1 child) has exactly 1 leaf.
// Therefore:
// - Minimum external nodes (e) = 1
// - Maximum internal nodes (i) = n - 1
//
// 2. Maximum external (e) and Minimum internal (i):
// To maximize external nodes, the tree should branch as much as possible,
// but it must have at least one node with exactly 1 child to remain improper.
// Using the properties of binary trees:
//   e = n2 + 1 (where n2 = number of nodes with 2 children)
//   n = e + n1 + n2 (where n1 = number of nodes with 1 child)
//   n = e + n1 + (e - 1)  =>  e = (n - n1 + 1) / 2
// To maximize e, we minimize n1. Since it's improper, n1 >= 1.
// - If n is even, n1 must be odd (min 1) so e is an integer: e = n / 2
// - If n is odd, n1 must be even (min 2) so e is an integer: e = (n - 1) / 2
// Therefore:
// - Maximum external nodes (e) = floor(n / 2)
// - Minimum internal nodes (i) = ceil(n / 2)

int main() { return 0; }
