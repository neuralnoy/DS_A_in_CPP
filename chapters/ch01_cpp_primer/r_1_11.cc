/* Write a C++ class, Flower, that has three member variables of type string,
int, and float, which respectively represent the name of the flower, its
number of petals, and price. Your class must include a constructor method
that initializes each variable to an appropriate value, and your class should
include functions for setting the value of each type, and getting the value
of each type.*/

#include <iomanip> // for std::setprecision
#include <iostream>
#include <string>

class Flower {
public:
  // Constructor with member initializer list
  Flower(const std::string &name = "Rose", int petals = 20, float price = 2.99f)
      : name_(name), petals_(petals), price_(price) {}

  // Getters (marked const, efficient)
  std::string getName() const { return name_; }
  int getPetals() const { return petals_; }
  float getPrice() const { return price_; }

  // Setters
  void setName(const std::string &new_name) { name_ = new_name; }
  void setPetals(int num_petals) { petals_ = num_petals; }
  void setPrice(float new_price) { price_ = new_price; }

private:
  std::string name_;
  int petals_;
  float price_;
};

int main() {
  // Create a flower using the default constructor
  Flower flower1;
  std::cout << "Default flower:\n";
  std::cout << "Name: " << flower1.getName() << "\n";
  std::cout << "Petals: " << flower1.getPetals() << "\n";
  std::cout << "Price: $" << std::fixed << std::setprecision(2)
            << flower1.getPrice() << "\n\n";

  // Create a flower with custom values
  Flower flower2("Tulip", 15, 3.49f);
  std::cout << "Custom flower:\n";
  std::cout << "Name: " << flower2.getName() << "\n";
  std::cout << "Petals: " << flower2.getPetals() << "\n";
  std::cout << "Price: $" << std::fixed << std::setprecision(2)
            << flower2.getPrice() << "\n\n";

  // Modify flower2 using setters
  flower2.setName("Sunflower");
  flower2.setPetals(30);
  flower2.setPrice(5.25f);

  std::cout << "Updated flower2:\n";
  std::cout << "Name: " << flower2.getName() << "\n";
  std::cout << "Petals: " << flower2.getPetals() << "\n";
  std::cout << "Price: $" << std::fixed << std::setprecision(2)
            << flower2.getPrice() << "\n";

  return 0;
}
