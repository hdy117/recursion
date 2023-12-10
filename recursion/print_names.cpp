#include "core/core.hpp"
#include <iostream>

void print_names(int n, const std::string &content) {
  if (n <= 0)
    return;

  std::cout << content << "\n";
  print_names(n - 1, content);
}

int main() {
  print_names(3, "Hi");
  return 0;
}