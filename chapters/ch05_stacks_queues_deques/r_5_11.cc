// Suppose you have a deque D containing the numbers (1,2,3,4,5,6,7,8),
// in this order. Suppose further that you have an initially empty queue
// Q. Give a pseudo-code description of a function that uses only D and
// Q (and no other variables or objects) and results in D storing the elements
// (1,2,3,5,4,6,7,8), in this order.
//
// Solution:
//
// function(D, Q):
//   // Step 1: Move 8, 7, and 6 to Q to get them out of the way
//   Q.push(D.pop_back())            // Q: [8], D: (1,2,3,4,5,6,7)
//   Q.push(D.pop_back())            // Q: [8,7], D: (1,2,3,4,5,6)
//   Q.push(D.pop_back())            // Q: [8,7,6], D: (1,2,3,4,5)
//
//   // Step 2: Swap 4 and 5 using D's double ends and Q
//   D.push_front(D.pop_back())      // Move 5 to front. D: (5,1,2,3,4)
//   Q.push(D.pop_back())            // Move 4 to Q. Q: [8,7,6,4], D: (5,1,2,3)
//   Q.push(D.pop_front())           // Move 5 to Q. Q: [8,7,6,4,5], D: (1,2,3)
//
//   // Step 3: Pull elements back from Q to front of D (reverses their order back to normal)
//   D.push_front(Q.pop_front())     // D: (8,1,2,3)
//   D.push_front(Q.pop_front())     // D: (7,8,1,2,3)
//   D.push_front(Q.pop_front())     // D: (6,7,8,1,2,3)
//   D.push_front(Q.pop_front())     // D: (4,6,7,8,1,2,3)
//   D.push_front(Q.pop_front())     // D: (5,4,6,7,8,1,2,3)
//
//   // Step 4: Rotate 1, 2, and 3 from back to front of D to restore final order
//   D.push_front(D.pop_back())      // D: (3,5,4,6,7,8,1,2)
//   D.push_front(D.pop_back())      // D: (2,3,5,4,6,7,8,1)
//   D.push_front(D.pop_back())      // D: (1,2,3,5,4,6,7,8)

int main() { return 0; }
