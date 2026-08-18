// Let T be a (possibly improper) binary tree with n nodes, and let D be the
// sum of the depths of all the external nodes of T . Show that if T has the
// minimum number of external nodes possible, then D is O(n) and if T has
// the maximum number of external nodes possible, then D is O(n logn).
//
//
// Solution:
//
// Part 1: Minimum external nodes
// The absolute minimum number of external nodes a binary tree can have is 1.
// This occurs when every internal node has exactly one child, forming a
// single straight line (a degenerate tree).
// In this tree with n nodes, the single leaf is at depth n - 1.
// Sum of depths D = n - 1.
// Thus, D is O(n).
//
// Part 2: Maximum external nodes
// To maximize external nodes, every internal node must have exactly two
// children, packing the tree as densely as possible (a perfect binary tree). In
// a perfectly balanced tree of n nodes, roughly half of all nodes are at the
// bottom level, yielding about n/2 external nodes.
// Because the number of nodes doubles at each level (1, 2, 4, 8...), the
// maximum depth d solves 2^d = n, which gives d = log(n). The sum D is the
// number of external nodes multiplied by their depth: D = (n/2) * log(n). Thus,
// D is O(n log n).

int main() { return 0; }
