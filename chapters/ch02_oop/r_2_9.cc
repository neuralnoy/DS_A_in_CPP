// If we choose inc = 128, how many calls to the nextValue function from
// the Arithmetic Progression class can we make before we cause
// a long-integer overflow, assuming a 64-bit long integer?
//
//
// Assume:
//
// * Initial value after construction is 1 (typical for an arithmetic
// progression example).
// * Increment `inc = 128`.
// * Type is a 64-bit integer.
// * Maximum unsigned 64-bit value is ( 2^{64} - 1 ).
// * Maximum signed 64-bit value is ( 2^{63} - 1 ).
//
// After ( n ) calls to `nextValue()`, the value is:
//
// [1 + 128n]
//
// Overflow happens when:
//
// [1 + 128n > {MAX} ]
//
// ---
//
// Unsigned 64-bit case, solve for:
//
// [ 1 + 128n <= 2^{64} - 1 ]
//
// ---
//
// Final answer:
//
// * Signed 64-bit long: (2^{56} - 1) calls
// * Unsigned 64-bit long: (2^{57} - 1) calls
//
// Assuming the starting value is 1.

int main() {
  // dummy main
  return 0;
}
