// Suppose we have a variable p that is declared to be a pointer to an object
// of type Progression using the classes of Section 2.2.3. Suppose further
// that p actually points to an instance of the class GeomProgression that
// was created with the default constructor. If we cast p to a pointer of type
// Progression and call p->firstValue(), what will be returned? Why?
//
//
// Answer:
//
// `p` is declared as a pointer to `Progression`, but it actually points to an
// object of type `GeomProgression` created with the default constructor.
//
// Casting `p` to `Progression*` changes only the *static type* of the pointer,
// not the *dynamic type* of the object. The object in memory is still a
// `GeomProgression`.
//
// If `firstValue()` is declared `virtual` in `Progression` (as in the
// Section 2.2.3 design), dynamic dispatch applies. Therefore, the
// `GeomProgression` implementation of `firstValue()` is invoked.
//
// In that design, `firstValue()` typically:
//
// * Resets `current` to the starting value,
// * Returns that starting value.
//
// For a default-constructed `GeomProgression`, the default constructor sets:
//
// * `current = 1`
// * multiplier (base) = 2
//
// Thus, `p->firstValue()` returns:
//
// 1
//
// It returns 1 because the dynamic type is `GeomProgression`, and the default
// geometric progression starts at 1.

int main() {
  // dummy main
  return 0;
}
