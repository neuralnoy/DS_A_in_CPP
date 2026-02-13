/* What (if anything) is different about the behavior of the following two
functionsnctions f and g that increment a variable and print its value?

void f(int x)
  {std::cout << ++x; }
void g(int& x)
  {std::cout << ++x; } */

// Answer:

// f(int x) passes the argument by value.
// A copy of the original variable is created, and ++x increments only this
// copy. The original variable outside the function remains unchanged.
//
// g(int& x) passes the argument by reference.
// The function operates directly on the original variable.
// ++x increments the original variable, and the change is visible after the
// call.

int main() {
  // dummy main for Cmake
}
