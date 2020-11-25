#pragma once

#include <bits/stdc++.h>

class UserPolicy {
 public:
  UserPolicy();
  ~UserPolicy() = default;

  void behaviour1(std::string var1);
  void behaviour2(double a);
  void behaviour3(double a, double b);

 private:
  std::string text;
  int value1;
  double value2;
};