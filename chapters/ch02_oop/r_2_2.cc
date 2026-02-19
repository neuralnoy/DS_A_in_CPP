// What are some potential efficiency disadvantages of having very shallow
// inheritance trees, that is, a large set of classes, A, B, C, and so on, such
// that all of these classes extend a single class, Z?
//
// 1. Virtual dispatch overhead:
// If class Z defines many virtual functions and A, B, C override them, calls
// through base pointers use dynamic dispatch (vtable lookup). This introduces:
//  - Indirection
//  - Reduced inlining opportunities
//  - Possible branch misprediction
//
// 2. Poor locality and polymorphic containers:
// If many derived types are stored via Z* or std::shared_ptr<Z>, objects may be
// scattered in memory. This harms: Cache locality Data-oriented performance
//
// 3. Large base interface:
// If Z accumulates functionality required by all subclasses, it may:
//  - Increase object size (if it contains data members)
//  - Force derived classes to carry unused members
//  - Increase compilation dependencies
//
// 4. Increased dynamic type checks:
// Frequent use of dynamic_cast or type switching logic due to a wide, flat
// hierarchy can add runtime cost.
//
// 5. Code size bloat
// If many derived classes override similar functions independently,
// this can increase binary size.

int main() {
  // dummy main
  return 0;
}
