#include "user_policy.h"

UserPolicy::UserPolicy() {
  text = "to all of you !!!";
  value1 = 20;
  value2 = 1.0e2;
}

void UserPolicy::behaviour1(std::string var) {
  std::cout << var << "\n" << text << std::endl; 
}

void UserPolicy::behaviour2(double a) {
  std::cout << value2 / a << std::endl;
}

void UserPolicy::behaviour3(double a, double b) {
  std::cout << value1 * value2*a * b << std::endl;
}