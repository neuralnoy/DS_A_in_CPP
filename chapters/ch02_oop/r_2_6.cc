// Draw a class inheritance diagram for the following set of classes.
// • Class Goat extends Object and adds a member variable tail and functions
//   milk and jump.
// • Class Pig extends Object and adds a member variable nose and functions
//   eat and wallow.
// • Class Horse extends Object and adds member variables height and color,
//   and functions run and jump.
// • Class Racer extends Horse and adds a function race.
// • Class Equestrian extends Horse and adds a member variable weight
//   and functions trot and isTrained.
//
//
// Answer:
//
//                     Object
//                        |
//         ---------------------------------
//         |               |               |
//       Goat             Pig            Horse
//         |               |         --------------
//         |               |         |            |
//    (tail)           (nose)      Racer     Equestrian
//    milk()           eat()                  (weight)
//    jump()           wallow()              trot()
//                                         isTrained()
//
// Horse:
//   (height, color)
//   run()
//   jump()
//
// Racer:
//   race()

int main() {
  // dummy main
  return 0;
}
