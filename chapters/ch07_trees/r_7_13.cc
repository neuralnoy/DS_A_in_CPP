// Let T be a proper binary tree with more than one node.
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
// b. It is not possible.
// In any proper binary tree with more than one node, the root must have both
// a left child and a right child.
// - Preorder visits: Root, Left Subtree, Right Subtree
// - Postorder visits: Left Subtree, Right Subtree, Root
// - Reverse Postorder visits: Root, Right Subtree, Left Subtree
//
// The second node visited in preorder is always the root of the left subtree.
// The second node visited in reverse postorder is always the root of the right
// subtree. Since the left and right children are distinct nodes, these two
// sequences can never be identical.

int main() { return 0; }
