#pragma once

#include <iostream>

void trail_recursion_func(int n) {
  if (n <= 0)
    return;
  else {
    std::cout << "n:" << n << ".\n";
  }
  trail_recursion_func(n - 1);
}