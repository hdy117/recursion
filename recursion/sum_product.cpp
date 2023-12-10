#include "core/core.hpp"
#include <iostream>

void sum_parameter(int i, int &sum) {
  if (i <= 0)
    return;
  sum += i;
  sum_parameter(i - 1, sum);
}

int sum_func(int n) {
  if (n <= 0)
    return 0;
  return n + sum_func(n - 1);
}

int product(int n) {
  if (n <= 0)
    return 1;
  return n * product(n - 1);
}

int main() {
  int sum = 0, n = 10;
  sum_parameter(n, sum);
  std::cout << "sum_parameter:" << sum << "\n";
  print_seperator();
  std::cout << "sum:" << sum_func(n) << "\n";
  print_seperator();
  std::cout << "product:" << product(3) << "\n";
  return 0;
}