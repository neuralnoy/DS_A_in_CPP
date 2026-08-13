// Show a tree achieving the worst-case running time for algorithm depth.
//
// Algorithm depth(T, p):
//   if p.isRoot() then
//     return 0
//   else
//     return 1 + depth(T, p.parent())
//
// Solution:
//
// The algorithm starts from the deepest external node of the tree and the tree
// is like a straight line, like a linked list.
// A tree structured as a straight line (a degenerate or skewed tree) of n
// nodes forces `O(n)` recursive calls when the algorithm is called on the
// single leaf node at the bottom.
//
// Example Tree:
//   o
//   |
//   o
//   |
//   o
//   |
//   o
//   |
//   o
//   |
//   o
//   |
//   o

int main() { return 0; }
