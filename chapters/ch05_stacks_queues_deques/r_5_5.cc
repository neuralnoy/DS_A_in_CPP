// Describe the output of the following series of stack operations: push(5),
// push(3), pop(), push(2), push(8), pop(), pop(), push(9), push(1), pop(),
// push(7), push(6), pop(), pop(), push(4), pop(), pop().

// Sulution:
// push(5) -> (5)
// push(3) -> (3, 5)
// pop() -> (5) return 3
// push(2) -> (2, 5)
// push(8) -> (8, 2, 5)
// pop() -> (2, 5) return 8
// pop() -> (5) return 2
// push(9) -> (9, 5)
// push(1) -> (1, 9, 5)
// pop() -> (9, 5) return 1
// push(7) -> (7, 9, 5)
// push(6) -> (6, 7, 9, 5)
// pop() -> (7, 9, 5) return 6
// pop() -> (9, 5) return 7
// push(4) -> (4, 9, 5)
// pop() -> (9, 5) return 4
// pop() -> (5) return 9
//
// So, the result is a stack with one element in there, which is 5!
// Returned elements: 3, 8, 2, 1, 6, 7, 4, 9

int main() { return 0; }
