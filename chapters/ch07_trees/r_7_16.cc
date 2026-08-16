// Answer the following questions so as to justify Proposition:
// Let T be a nonempty binary tree, and let n, nE , nI and h denote
// the number of nodes, number of external nodes, number of internal nodes, and
// height of T , respectively. Then T has the following properties:
// 1. h + 1 ≤ n ≤ 2h+1 − 1
// 2. 1 ≤ nE ≤ 2h
// 3. h ≤ nI ≤ 2h − 1
// 4. log(n + 1) − 1 ≤ h ≤ n − 1
// Also, if T is proper, then it has the following properties:
// 1. 2h + 1 ≤ n ≤ 2h+1 − 1
// 2. h + 1 ≤ nE ≤ 2h
// 3. h ≤ nI ≤ 2h − 1
// 4. log(n + 1) − 1 ≤ h ≤ (n − 1)/2

// Questions:
// a. What is the minimum number of external nodes for a binary tree with
// height h? Justify your answer.
// b. What is the maximum number of external nodes for a binary tree with
// height h? Justify your answer.
// c. Let T be a binary tree with height h and n nodes. Show that
//                log(n + 1) − 1 ≤ h ≤ (n − 1)/2.
// d. For which values of n and h can the above lower and upper bounds
// on h be attained with equality?
//
//
// Solution:
// a. Minimum number of external nodes: 1.
// Justification: A binary tree can be a single vertical path where each
// internal node has exactly 1 child. The only external node is the single
// leaf at depth h.
//
// b. Maximum number of external nodes: 2^h.
// Justification: Each node can have at most 2 children. By induction,
// level d can have at most 2^d nodes. The maximum leaves occur when every
// node branches twice (a perfect binary tree), putting 2^h nodes at level h.
//
// c. Show log2(n + 1) - 1 <= h <= (n - 1)/2 (Assuming T is proper).
// Lower Bound (shortest possible tree):
// To minimize height, maximize nodes per level.
// Maximum nodes in a binary tree of height h is 2^(h+1) - 1.
// n <= 2^(h+1) - 1
// n + 1 <= 2^(h+1)
// log2(n + 1) <= h + 1
// log2(n + 1) - 1 <= h
//
// Upper Bound (tallest possible tree):
// To maximize height, minimize nodes per level.
// In a proper binary tree, every internal node must have exactly 2 children.
// A minimal proper tree of height h has 1 root, and each subsequent level
// adds 2 nodes (1 leaf, 1 internal).
// Total minimum nodes n >= 2h + 1.
// 2h <= n - 1
// h <= (n - 1)/2
//
// d. Equality conditions:
// Lower bound: Attained when n = 2^(h+1) - 1. This is a perfect binary tree
// where every level is completely full.
// Upper bound: Attained when n = 2h + 1. This is a minimal proper binary tree
// where every internal node has exactly one leaf child and one internal child.

int main() { return 0; }
