// Describe how to implement a capacity-limited stack, which uses the functions
// of a capacity-limited deque to perform the functions of the stack ADT
// in ways that do not throw exceptions when we attempt to perform a
// push on a full stack or a pop on an empty stack.
//
// Solution:
// We can implement a capacity-limited stack of capacity N using a capacity-limited
// deque D of the same capacity N.
//
// Let the top of the stack correspond to the back of the deque, and the bottom of
// the stack correspond to the front of the deque.
//
// 1. push(e):
//    - If the deque is full (D.size() == N), we call D.eraseFront() to discard the
//      oldest element (the bottom of the stack) to make room.
//    - We then call D.insertBack(e) to add the new element to the top of the stack.
//    - This avoids any "stack full" exceptions.
//
//    Visual representation (N = 5):
//    Stack Full: [ Bottom: A, B, C, D, Top: E ]
//    push(F) -> eraseFront() -> [ B, C, D, Top: E ] -> insertBack(F) -> [ Bottom: B, C, D, E, Top:
//    F ]
//
// 2. pop():
//    - If the deque is empty (D.empty() is true), we simply do nothing.
//    - Otherwise, we call D.eraseBack() to remove the top element.
//    - This avoids any "stack empty" exceptions.
//
// 3. top():
//    - If empty, return a sentinel or null value. Otherwise, return D.back().

int main() { return 0; }
