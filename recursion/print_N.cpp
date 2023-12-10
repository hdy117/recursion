#include "core.hpp"
#include <iostream>

void print_1_to_N(int n) {
  if (n <= 0)
    return;

  print_1_to_N(n - 1);
  std::cout << n << "\n";
}

void print_N_to_1(int n) {
  if (n <= 0)
    return;

  std::cout << n << "\n";
  print_N_to_1(n - 1);
}

int main() {
  print_1_to_N(3);
  print_seperator();
  print_N_to_1(3);
  return 0;
}