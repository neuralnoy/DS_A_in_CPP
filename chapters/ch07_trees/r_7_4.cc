// Let T be an n-node improper binary tree (that is, each internal node has
// one or two children). Describe how to represent T by means of a proper
// binary tree T' with O(n) nodes.
//
// Solution:
//
// The complete approach to represent T as T':
// 1. Traverse the tree T.
// 2. For every node that has exactly one child,
// attach a dummy leaf node as its second child.
// 3. The resulting tree T' is proper. The worst-case total node count is 2n - 1,
// satisfying the O(n) space requirement, O(2n - 1) simplifies to O(n).

int main() { return 0; }
