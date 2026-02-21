// A derived class’s constructor explicitly invokes its base class’s
// constructor, but a derived class’s destructor cannot invoke its base class’s
// destructor. Why does this apparent asymmetry make sense?
//
// Answer:
//
// The asymmetry exists because construction and destruction follow opposite
// dependency directions.
//
// During construction, base subobjects must be fully initialized before the
// derived part can safely use them. Therefore, a derived class constructor
// explicitly invokes a base class constructor in its initializer list. This
// guarantees that the base portion of the object is constructed first and in a
// well-defined order.
//
// During destruction, the order must be reversed. The derived portion must be
// destroyed first, while the base portion is still valid. Only after the
// derived destructor finishes does the language automatically invoke the base
// class destructor. If a derived destructor were allowed to explicitly call the
// base destructor, two problems would arise:
//
// 1. The base destructor could be executed twice (once manually and once
// automatically), leading to undefined behavior.
// 2. The base part could be destroyed too early, while the derived destructor
// still relies on it.
//
// C++ enforces automatic base destructor invocation to preserve correct
// lifetime ordering and prevent these errors. The model ensures a strict and
// safe object lifetime sequence: base → derived during construction, derived →
// base during destruction.

int main() {
  // dummy main
  return 0;
}
