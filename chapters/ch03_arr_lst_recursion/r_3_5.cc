// Give a recursive definition of a singly linked list.


// A **singly linked list** can be defined **recursively** by specifying a
// base case and a recursive case.
//
// ### Recursive Definition
//
// A singly linked list is either:
//
// 1. **Empty** (called the empty list or `null`), or
// 2. A **node** that contains:
//
//    * a **value**, and
//    * a **reference (pointer)** to another singly linked list.
//
// ### Formal Definition
//
// Let `List` be the set of all singly linked lists. Then:
//
// * **Base case:**
//   `List = ∅` (the empty list)
//
// * **Recursive case:**
//   If `x` is a value and `L` is a singly linked list, then
//   `Node(x, L)` is also a singly linked list.
//
// This is often written as:
//
// ```
// List ::= Empty
//        | Node(value, List)
// ```
//
// ### Intuition
//
// Each list is built from:
//
// * one element (the **head**), and
// * another list (the **tail**)
//
// So a list like:
//
// ```
// [3, 7, 10]
// ```
//
// is recursively:
//
// ```
// Node(3, Node(7, Node(10, Empty)))
// ```
//
// ### Corresponding C/C++ Structure
//
// This recursive definition maps directly to how linked lists are implemented:
//
// ```cpp
// struct Node {
//     int value;
//     Node* next;  // points to another Node (i.e., another list)
// };
// ```
//
// Here:
//
// * `next == nullptr` represents the **empty list** (base case)
// * otherwise, `next` points to another node, forming the recursive structure.
//
int main() { return 0; }
