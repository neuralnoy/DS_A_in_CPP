// Describe how to implement a capacity-limited queue, which uses the
// functions of a capacity-limited deque to perform the functions of the queue
// ADT in ways that do not throw exceptions when we attempt to perform a
// enqueue on a full queue or a dequeue on an empty queue.
//
// Solution:
// We can implement a capacity-limited queue of capacity N using a capacity-limited
// deque D of the same capacity N.
//
// Let the front of the queue correspond to the front of the deque, and the back
// of the queue correspond to the back of the deque.
//
// 1. enqueue(e):
//    - If the deque is full (D.size() == N), we call D.eraseFront() to discard the
//      oldest element (at the front of the queue) to make room.
//    - We then call D.insertBack(e) to add the new element to the back of the queue.
//    - This avoids any "queue full" exceptions and preserves First-In, First-Out (FIFO) order.
//
//    Visual representation (N = 3):
//    Queue Full: [ Front: A, B, Back: C ]
//    enqueue(D) -> D.eraseFront() -> [ Front: B, Back: C ] -> D.insertBack(D) -> [ Front: B, C,
//    Back: D ]
//
// 2. dequeue():
//    - If the deque is empty (D.isEmpty() is true), we simply do nothing.
//    - Otherwise, we call D.eraseFront() to remove the oldest element.
//    - This avoids any "queue empty" exceptions.
//
// 3. front():
//    - If empty, return a sentinel or null value. Otherwise, return D.front().

int main() { return 0; }
