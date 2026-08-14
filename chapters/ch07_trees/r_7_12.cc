// Let T be an ordered tree with more than one node.
// a. Is it possible that the preorder traversal of T visits the nodes in the
// same order as the postorder traversal of T? If so, give an example;
// otherwise, argue why this cannot occur.
// b. Likewise, is it possible that the preorder traversal of T visits the
// nodes in the reverse order of the postorder traversal of T ? If so, give an
// example; otherwise, argue why this cannot occur.
//
// Solution:
//
// a. It is not possible, it is the main idea difference between two different
// traversal methods, if it's not an empty tree which has more than one node,
// then it means for preorder: visiting the child requires visiting the parent
// first and for postorder: visiting the parent requires visiting the children
// first, which makes impossible to have the same order of visits.
//
// b. This is possible.
//
// Example Tree:
//   (A)
//    |
//   (B)
//
// Preorder: AB
// Postorder: BA
//
// So it is reverted.

int main() { return 0; }
