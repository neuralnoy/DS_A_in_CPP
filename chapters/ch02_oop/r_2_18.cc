// Write a short C++ program that creates a Pair class that can store two
// objects declared as generic types. Demonstrate this program by creating
// and printing Pair objects that contain five different kinds of pairs, such as
// <int,string> and <float,long>

#include <iostream>
#include <string>

template <typename T, typename P> class Pair {
public:
  Pair(T obj1, P obj2) : obj1_(obj1), obj2_(obj2) {}
  void PrintPair();

private:
  T obj1_;
  P obj2_;
};

template <typename T, typename P> void Pair<T, P>::PrintPair() {
  std::cout << obj1_ << " " << obj2_ << std::endl;
}

int main() {
  Pair<int, std::string> p1(42, "Hello");
  Pair<float, long> p2(3.14f, 100000L);
  Pair<char, double> p3('A', 2.718);
  Pair<std::string, bool> p4("Test", true);
  Pair<long, float> p5(99999L, 1.23f);

  p1.PrintPair();
  p2.PrintPair();
  p3.PrintPair();
  p4.PrintPair();
  p5.PrintPair();

  return 0;
}
