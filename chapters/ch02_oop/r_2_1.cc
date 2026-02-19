// What are some potential efficiency disadvantages of having very deep
// inheritance trees, that is, a large set of classes, A, B, C, and so on, such
// that B extends A, C extends B, D extends C, etc.?
//
// Answer:
//
// 1. Larger object size:
// Each derived class adds its own data members. Deep hierarchies can
// accumulate significant memory footprint.
//
// 2. Constructor/destructor overhead:
// Construction and destruction walk the entire inheritance chain. With very
// deep trees, this increases initialization cost.
//
// 3. Virtual dispatch overhead:
// If virtual functions are used, calls go through a vtable.
// This is constant-time but prevents inlining in many cases and may affect
// performance in hot paths.
//
// 4. Cache locality issues:
// Large objects and complex layouts can reduce cache efficiency.
//
// 5. Indirection in virtual inheritance:
// If virtual inheritance is involved (e.g., diamond patterns),
// additional pointer adjustments and memory overhead occur.
//
// 6. Maintainability and compile-time cost:
// Deep hierarchies often increase compilation dependencies and slow builds.
// This is not runtime efficiency but still a practical performance concern.

int main() {
  // dummy main for the Cmake
  return 0;
}
