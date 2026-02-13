/* Write a C++ class, Flower, that has three member variables of type string,
int, and float, which respectively represent the name of the flower, its
number of petals, and price. Your class must include a constructor method
that initializes each variable to an appropriate value, and your class should
include functions for setting the value of each type, and getting the value
of each type.*/

#include <iostream>
#include <string>

class Flower {
public:
  // constructor
  Flower(std::string name, int petals, float price)
      : name_(name), petals_(petals), price_(price) {}

  // getter methods
  std::string getName();
  int getPetals();
  float getPrice();

  // setter methods
  void setName(std::string new_name);
  void setPetals(int num_petals);
  void setPrice(float new_price);

private:
  std::string name_;
  int petals_;
  float price_;
};

// getters
std::string Flower::getName() { return name_; }
int Flower::getPetals() { return petals_; }
float Flower::getPrice() { return price_; }

// setters
void Flower::setName(std::string new_name) { name_ = new_name; }
void Flower::setPetals(int num_petals) { petals_ = num_petals; }
void Flower::setPrice(float new_price) { price_ = new_price; }

int main() {
  // Create a Flower object using the constructor
  Flower rose("Rose", 20, 2.99);

  // Print initial values using getters
  std::cout << "Initial flower details:\n";
  std::cout << "Name: " << rose.getName() << "\n";
  std::cout << "Petals: " << rose.getPetals() << "\n";
  std::cout << "Price: $" << rose.getPrice() << "\n\n";

  // Modify values using setters
  rose.setName("Tulip");
  rose.setPetals(15);
  rose.setPrice(3.49f);

  // Print updated values
  std::cout << "Updated flower details:\n";
  std::cout << "Name: " << rose.getName() << "\n";
  std::cout << "Petals: " << rose.getPetals() << "\n";
  std::cout << "Price: $" << rose.getPrice() << "\n";

  return 0;
}
