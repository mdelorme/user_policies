#include "user_policy.h"

UserPolicy::UserPolicy() {
  text = "I want a total different text !";
  value1 = 20;
  value2 = 1.0e2;
}

void UserPolicy::behaviour1(std::string var) {
  std::cout << text << std::endl; 
}

void UserPolicy::behaviour2(double a) {
  std::cout << value1 << " " << value2 << std::endl;
}

void UserPolicy::behaviour3(double a, double b) {
  std::cout << value2*a*b << std::endl;
}