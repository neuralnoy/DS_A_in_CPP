// Describe a nonrecursive function for finding, by link hopping, the middle
// node of a doubly linked list with header and trailer sentinels. (Note: This
// function must only use link hopping; it cannot use a counter.) What is the
// running time of this function?

// Answer:
// We can find the middle node non-destructively using one of two link-hopping strategies:
//
// Strategy 1: Meet-in-the-Middle (Two Pointers)
// 1. Initialize two pointers: 'left' at header->next and 'right' at trailer->previous.
// 2. In a loop, check if they have met (left == right) or crossed/become adjacent (left->next ==
// right).
// 3. If they haven't, advance 'left' forward (left = left->next) and 'right' backward (right =
// right->prev).
// 4. When the loop terminates:
//    - If left == right (odd number of nodes), 'left' is the unique middle node.
//    - If left->next == right (even number of nodes), either 'left' or 'right' can be chosen as the
//    middle.
//
// Strategy 2: Fast and Slow Pointers (Runner Technique)
// 1. Initialize 'slow' and 'fast' pointers to header->next.
// 2. Loop while (fast != trailer) and (fast->next != trailer).
// 3. In each step, advance 'slow' by 1 hop (slow = slow->next) and 'fast' by 2 hops (fast =
// fast->next->next).
// 4. When 'fast' reaches the trailer, 'slow' will point to the middle node (or the lower-middle for
// even-sized lists).
//
// Running Time:
// Both strategies run in O(n) time, where n is the number of nodes in the list. This is because
// we perform at most n/2 steps, with each step consisting of O(1) link-hopping operations.
//
// Space Complexity:
// O(1) auxiliary space, as only a few pointer references are maintained.

int main() { return 0; }
