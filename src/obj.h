#pragma once

#include "user_policy.h"

class Obj {
 private:
  UserPolicy policy;

 public:
  Obj() = default;
  ~Obj() = default;

  void behaviour1() {
    policy.behaviour1("Hello");
  }

  void behaviour2() {
    policy.behaviour2(5.0);
  }

  void behaviour3() {
    policy.behaviour3(5.0, 0.001);
  }
};