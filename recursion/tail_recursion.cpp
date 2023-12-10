#include "core.hpp"
#include <iostream>

void trail_recursion_func(int n) {
  if (n <= 0)
    return;
  else {
    std::cout << "n:" << n << ".\n";
  }
  trail_recursion_func(n - 1);
}

int main() {
  trail_recursion_func(5);

  return 0;
}