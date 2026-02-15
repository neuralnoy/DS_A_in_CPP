// Write a C++ class Vector2, that stores the (x,y) coordinates of a two-
// dimensional vector, where x and y are of type double. Show how to
// override various C++ operators in order to implement the addition of two
// vectors (producing a vector result), the multiplication of a scalar times
// a vector (producing a vector result), and the dot product of two vectors
// (producing a double result).

#include <iostream>

class Vector2 {
public:
  // Constructor
  Vector2(double x, double y) : x_(x), y_(y) {}

  // Vector addition: v1 + v2
  Vector2 operator+(const Vector2 &other) const {
    return {x_ + other.x_, y_ + other.y_};
  }

  // Dot product: v1 * v2
  double operator*(const Vector2 &other) const {
    return x_ * other.x_ + y_ * other.y_;
  }

  // Scalar multiplication: v * scalar
  Vector2 operator*(double scalar) const { return {x_ * scalar, y_ * scalar}; }

  // Helper function to print vector
  void Print() const { std::cout << "(" << x_ << ", " << y_ << ")\n"; }

private:
  double x_;
  double y_;
};

// Scalar * Vector multiplication (non-member)
Vector2 operator*(double scalar, const Vector2 &vec) {
  return vec * scalar; // reuse member operator
}

int main() {
  Vector2 v1(1.0, 2.0);
  Vector2 v2(3.0, 4.0);

  // Vector addition
  Vector2 sum = v1 + v2;
  sum.Print(); // (4, 6)

  // Dot product
  double dot = v1 * v2;
  std::cout << dot << "\n"; // 11

  // Scalar multiplication
  Vector2 scaled1 = v1 * 2.0;
  scaled1.Print(); // (2, 4)

  Vector2 scaled2 = 3.0 * v2;
  scaled2.Print(); // (9, 12)

  return 0;
}
