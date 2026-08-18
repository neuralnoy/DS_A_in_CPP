// Describe, in pseudo-code, an algorithm for computing the number of
// descendents of each node of a binary tree. The algorithm should be based
// on the Euler tour traversal.
//
// Solution:
// Use a single, continuous Euler tour with a global counter that increments
// on every visit (left, bottom, right). For each node, record the counter
// at the first visit. When leaving the node on the third visit, the difference
// between the current counter and the first visit counter represents all
// touches in the subtree. Subtract the 3 touches that belong to the current
// node itself, and divide by 3 to get the total number of descendants.
//
// Pseudo-code:
// Algorithm EulerTourDescendants(v, counter):
//   first_visit = counter
//   counter = counter + 1               // 1st touch (left)
//
//   if v.has_left():
//     EulerTourDescendants(v.left, counter)
//
//   counter = counter + 1               // 2nd touch (bottom)
//
//   if v.has_right():
//     EulerTourDescendants(v.right, counter)
//
//   counter = counter + 1               // 3rd touch (right)
//
//   touches_in_subtree = counter - first_visit
//   v.descendants = (touches_in_subtree - 3) / 3
//

int main() { return 0; }
