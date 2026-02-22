// Write a program that consists of three classes, A, B, and C, such that B is a
// subclass of A and C is a subclass of B. Each class should define a member
// variable named “x” (that is, each has its own variable named x). Describe
// a way for a member function in C to access and set A’s version of x to a
// given value, without changing B or C’s version.

#include <iostream>

class A {
protected:
  int x_; // protected, so derived classes can access

public:
  A(int x) : x_(x) {}
  virtual void SetX(const int &num) { x_ = num; }
  int GetX() const { return x_; }
};

class B : public A {
protected:
  int x_; // B has its own x_

public:
  B(int x) : A(x), x_(x) {}
  void SetX(const int &num) override { x_ = num; }
  int GetX() const { return x_; }
};

class C : public B {
protected:
  int x_; // C has its own x_

public:
  C(int x) : B(x), x_(x) {}

  void SetX(const int &num) override { x_ = num; }

  // Special function to set A's x_ without touching B or C's x_
  void SetAX(const int &num) {
    A::x_ = num; // explicitly access A's x_
  }

  void PrintAll() {
    std::cout << "A::x_ = " << A::x_ << "\n";
    std::cout << "B::x_ = " << B::x_ << "\n";
    std::cout << "C::x_ = " << x_ << "\n";
  }
};

int main() {
  C obj(1);
  obj.SetAX(100); // sets only A::x_
  obj.PrintAll();

  return 0;
}
