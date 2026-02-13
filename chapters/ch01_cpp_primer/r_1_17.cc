/*Write a C++ class, AllKinds, that has three member variables of type int,
long, and float, respectively. Each class must include a constructor func-
tion that initializes each variable to a nonzero value, and each class should
include functions for setting the value of each type, getting the value of
each type, and computing and returning the sum of each possible combi-
nation of types.*/

#include <climits>
#include <iostream>

class AllKinds {
public:
  // Constructor with default nonzero values
  AllKinds(int member1 = 1, long member2 = 1000, float member3 = 9.99f)
      : member1_(member1), member2_(member2), member3_(member3) {}

  // Getters
  int getMember1() const { return member1_; }
  long getMember2() const { return member2_; }
  float getMember3() const { return member3_; }

  // Setters
  void setMember1(int value) { member1_ = value; }
  void setMember2(long value) { member2_ = value; }
  void setMember3(float value) { member3_ = value; }

  // Sum functions
  long sumMember1WithMember2() const {
    return member1_ + member2_; // int promoted to long
  }

  float sumMember1WithMember3() const {
    return member1_ + member3_; // int promoted to float
  }

  double sumMember2WithMember3() const {
    return member2_ +
           member3_; // long promoted to double, float promoted to double
  }

private:
  int member1_;
  long member2_;
  float member3_;
};

// Main function to test the class
int main() {
  // Default constructor
  AllKinds obj1;
  std::cout << "Default constructor:\n";
  std::cout << "member1: " << obj1.getMember1() << ", "
            << "member2: " << obj1.getMember2() << ", "
            << "member3: " << obj1.getMember3() << "\n";
  std::cout << "Sums: " << obj1.sumMember1WithMember2() << ", "
            << obj1.sumMember1WithMember3() << ", "
            << obj1.sumMember2WithMember3() << "\n\n";

  // Custom initialization
  AllKinds obj2(5, 2000L, 3.14f);
  std::cout << "Custom initialization:\n";
  std::cout << "Sums: " << obj2.sumMember1WithMember2() << ", "
            << obj2.sumMember1WithMember3() << ", "
            << obj2.sumMember2WithMember3() << "\n\n";

  // Using setters
  obj2.setMember1(-10);
  obj2.setMember2(5000L);
  obj2.setMember3(0.5f);
  std::cout << "After setters:\n";
  std::cout << "Sums: " << obj2.sumMember1WithMember2() << ", "
            << obj2.sumMember1WithMember3() << ", "
            << obj2.sumMember2WithMember3() << "\n\n";

  // Edge cases
  AllKinds obj3(INT_MAX, LONG_MAX, 1e38f);
  std::cout << "Edge cases:\n";
  std::cout << "Sums: " << obj3.sumMember1WithMember2() << ", "
            << obj3.sumMember1WithMember3() << ", "
            << obj3.sumMember2WithMember3() << "\n\n";

  // Negative values
  AllKinds obj4(-1, -100L, -0.5f);
  std::cout << "Negative values:\n";
  std::cout << "Sums: " << obj4.sumMember1WithMember2() << ", "
            << obj4.sumMember1WithMember3() << ", "
            << obj4.sumMember2WithMember3() << "\n";

  return 0;
}
