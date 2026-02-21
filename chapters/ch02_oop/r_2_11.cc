// Consider the inheritance of classes from Exercise R-2.6, and let d be an
// object variable of type Horse. If d refers to an actual object of type Eques-
// trian, can it be cast to the class Racer? Why or why not?
//
// Answer:
//
//
// No, it cannot be safely cast to `Racer`.
//
// Even if `d` is declared as type `Horse`, the actual (runtime) object it
// refers to is of type `Equestrian`. In an inheritance hierarchy, a cast is
// only valid if the runtime object is an instance of the target class (or a
// subclass of it).
//
// `Racer` and `Equestrian` are sibling subclasses of `Horse`. An object of type
// `Equestrian` is not a `Racer`, and there is no inheritance relationship
// between those two classes.
//
// Therefore, casting `d` to `Racer` would fail at runtime (e.g., a
// `ClassCastException` in Java), because the underlying object is not of type
// `Racer`.
//
// In simple terms: things can be cast between Parent and Child,
// but not siblings.

int main() {
  // dummy main
  return 0;
}
