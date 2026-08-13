// What is the running time of algorithm height2(T,v) (Code Fragment below)
// when called on a node v distinct from the root of T ?
//
// Algorithm height2(T, p):
//   if p.isExternal() then
//     return 0
//   else
//     h= 0
//     for each q ∈ p.children() do
//       h= max(h,height2(T,q))
//     return 1 + h

#include <algorithm>
#include <vector>

using std::max;

struct Position {
    std::vector<Position> _children;
    bool isExternal() const { return _children.empty(); }
    std::vector<Position> children() const { return _children; }
};

using PositionList = std::vector<Position>;
using Iterator = PositionList::const_iterator;

struct Tree {};

int height2(const Tree& T, const Position& p) {
    if (p.isExternal()) return 0;  // leaf has height 0
    int h = 0;
    PositionList ch = p.children();  // list of children
    for (Iterator q = ch.begin(); q != ch.end(); ++q) h = max(h, height2(T, *q));
    return 1 + h;  // 1 + max height of children
}

int main() { return 0; }

// Solution:
//
// If height2(T, v) is called on a node v distinct from the root, it only visits
// the descendants of v. It never goes up the tree.
//
// Let s_v be the number of nodes in the subtree rooted at v.
// The algorithm visits every node w in this subtree exactly once.
// At each node w, it spends O(1 + c_w) time, where c_w is the number of children of w.
//
// Summing this time over all nodes in the subtree rooted at v:
// Sum(1 + c_w) = Sum(1) + Sum(c_w)
//
// - Sum(1) for each node in the subtree equals s_v.
// - Sum(c_w) for each node in the subtree equals the total number of edges in that subtree, which
// is s_v - 1.
//
// Therefore, the total time is O(s_v). The running time is proportional to the
// number of nodes in the subtree rooted at v, not the entire tree T.
