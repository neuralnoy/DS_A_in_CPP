// Consider the following code fragment : class Object {
// public:
//   virtual void printMe() = 0;
// };
// class Place : public Object {
// public:
//   virtual void printMe() { cout << "Buy it.\n"; }
// };
// class Region : public Place {
// public:
//   virtual void printMe() { cout << "Box it.\n"; }
// };
// class State : public Region {
// public:
//   virtual void printMe() { cout << "Ship it.\n"; }
// };
// class Maryland : public State {
// public:
//   virtual void printMe() { cout << "Read it.\n"; }
// };
// int main() {
//   Region *mid = new State;
//   State *md = new Maryland;
//   Object *obj = new Place;
//   Place *usa = new Region;
//   md− > printMe();
//   mid− > printMe();
//   (dynamic cast<Place *>(obj))−> printMe();
//   obj = md;
//   (dynamic cast<Maryland *>(obj))−> printMe();
//   obj = usa;
//   (dynamic cast<Place *>(obj))−> printMe();
//   usa = md;
//   (dynamic cast<Place *>(usa))−> printMe();
//   return EXIT SUCCESS;
// }
// What is the output from calling the main function of the Maryland class ?
//
// Answer:
//
//

// ```
// Object (abstract, printMe() = 0)
//   └─ Place       -> printMe(): "Buy it."
//       └─ Region  -> printMe(): "Box it."
//           └─ State -> printMe(): "Ship it."
//               └─ Maryland -> printMe(): "Read it."
// ```
//
// `printMe()` is **virtual**, so the **runtime type** of the object determines
// which function executes.
//
// Now look at `main()`:
//
// ```cpp
// Region* mid = new State;
// State* md = new Maryland;
// Object* obj = new Place;
// Place* usa = new Region;
// ```
//
// * `mid` points to a `State` object, but typed as `Region*`.
// * `md` points to a `Maryland` object, typed as `State*`.
// * `obj` points to a `Place`.
// * `usa` points to a `Region`.
//
// Then the function calls:
//
// 1. **`md->printMe();`**
//
//    * `md` is a `State*` pointing to a `Maryland`.
//    * Virtual dispatch → calls `Maryland::printMe()`.
//      **Output:** `Read it.`
//
// 2. **`mid->printMe();`**
//
//    * `mid` is a `Region*` pointing to a `State`.
//    * Virtual dispatch → calls `State::printMe()`.
//      **Output:** `Ship it.`
//
// 3. **`(dynamic_cast<Place*>(obj))->printMe();`**
//
//    * `obj` points to a `Place`.
//    * Cast to `Place*` succeeds.
//    * Virtual dispatch → `Place::printMe()`.
//      **Output:** `Buy it.`
//
// 4. **`obj = md;`**
//
//    * Now `obj` points to the `Maryland` object (`State*`).
//
//    **`(dynamic_cast<Maryland*>(obj))->printMe();`**
//
//    * `obj` points to `Maryland`, cast to `Maryland*` succeeds.
//    * Virtual dispatch → `Maryland::printMe()`.
//      **Output:** `Read it.`
//
// 5. **`obj = usa;`**
//
//    * `obj` points to `usa`, which is a `Region` object (`Place*`).
//
//    **`(dynamic_cast<Place*>(obj))->printMe();`**
//
//    * Cast to `Place*` succeeds.
//    * Virtual dispatch → `Region::printMe()`.
//      **Output:** `Box it.`
//
// 6. **`usa = md;`**
//
//    * `md` points to `Maryland`, assigned to `usa` (`Place*`).
//
//    **`(dynamic_cast<Place*>(usa))->printMe();`**
//
//    * `usa` points to `Maryland`, cast to `Place*` succeeds.
//    * Virtual dispatch → `Maryland::printMe()`.
//      **Output:** `Read it.`
//
// ---
//
// **Final output sequence:**
//
// ```
// Read it.
// Ship it.
// Buy it.
// Read it.
// Box it.
// Read it.
// ```
//
// No undefined behavior occurs because all `dynamic_cast`s are to valid types
// in the hierarchy.

int main() {
  // dummy main
  return 0;
}
