// Design a class Line that implements a line, which is represented by the for-
// mula y= ax + b. Your class should store a and b as double member vari-
// ables. Write a member function intersect(ℓ) that returns the x coordinate
// at which this line intersects line ℓ. If the two lines are parallel, then
// your function should throw an exception Parallel. Write a C++ program that
// creates a number of Line objects and tests each pair for intersection. Your
// program should print an appropriate error message for parallel lines.

#include <iostream>

class Parallel {
public:
  Parallel(const char *msg) : message_(msg) {}
  const char *what() const { return message_; }

private:
  const char *message_;
};

class Line {
public:
  Line(double a, double b) : a_(a), b_(b) {}

  double Intersect(const Line &other) const {
    // Parallel if slopes are equal
    if (a_ == other.a_) {
      throw Parallel("Lines are parallel (no unique intersection).");
    }

    // Solve: a1*x + b1 = a2*x + b2
    // x = (b2 - b1) / (a1 - a2)
    return (other.b_ - b_) / (a_ - other.a_);
  }

  double GetSlope() const { return a_; }
  double GetIntercept() const { return b_; }

private:
  double a_;
  double b_;
};

int main() {
  Line lines[] = {Line(1, 2), Line(2, 5),  Line(1, 4), // parallel to first
                  Line(5, 9), Line(-3, 7), Line(0, 3)};

  const int size = sizeof(lines) / sizeof(lines[0]);

  for (int i = 0; i < size; ++i) {
    for (int j = i + 1; j < size; ++j) {
      std::cout << "Testing Line " << i << " (a=" << lines[i].GetSlope()
                << ", b=" << lines[i].GetIntercept() << ") with Line " << j
                << " (a=" << lines[j].GetSlope()
                << ", b=" << lines[j].GetIntercept() << "): ";

      try {
        double x = lines[i].Intersect(lines[j]);
        std::cout << "Intersection at x = " << x << "\n";
      } catch (Parallel &e) {
        std::cout << e.what() << "\n";
      }
    }
  }

  return 0;
}
