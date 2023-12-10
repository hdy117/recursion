#include "core.hpp"
#include <iostream>

void print_stars(int n) {
  int i = 0;

  if (n > 1) {
    print_stars(n - 1);
  }
  for (i = 0; i < n; ++i) {
    std::cout << "*";
  }
  std::cout << "\n";
}

int main() {
  print_stars(3);

  return 0;
}