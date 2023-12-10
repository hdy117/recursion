#include "core/core.hpp"
#include <iostream>

/**
 * @brief time complexity is 2^n according the recursion tree
 *
 * @param n
 * @return int
 */
int fabonacci(int n) {
  if (n == 0)
    return 0;
  if (n <= 2)
    return 1;
  return fabonacci(n - 1) + fabonacci(n - 2);
}

int main() {
  std::cout << "fabonacci(5):" << fabonacci(5) << "\n";
  std::cout << "fabonacci(6):" << fabonacci(6) << "\n";
  return 0;
}